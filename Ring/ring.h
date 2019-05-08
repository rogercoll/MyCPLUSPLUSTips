#ifndef RING_H_
#define RING_H_

#include<iostream>
#include<exception>
using namespace std;


class MyException: public exception{
public:
  virtual const char* what() const throw(){
    return "Out of the ring scope";
  }
};



template<class T>
class ring{
private:
  int m_pos;
  int m_size;
  T *m_values;
public:
  class iterator;
  ring(int size): m_pos(0), m_size(size), m_values(NULL){
    m_values = new T[size];
  }
  ~ring(){
    delete []m_values;
  }
  int size(){
    return m_size;
  }
  void add(T value){
    m_values[m_pos] = value;
    ++m_pos;
    if(m_pos == m_size) m_pos = 0;
  }
  T &get(int pos){
    if(pos >= 0 && pos < m_size){
      return m_values[pos];
    }else{
      throw MyException();
    }
  }
  T &operator[](int pos){
    if(pos >= 0 && pos < m_size){
      return m_values[pos];
    }else{
      throw MyException();
    }
  }
  iterator begin(){
    return iterator(0,*this);
  }
  iterator end(){
    return iterator(m_size,*this);
  }
};


template<class T>
class ring<T>::iterator{
private:
  int m_pos;
  ring &m_ring;
public:
  iterator(int pos,ring &aux): m_pos(pos),m_ring(aux){
  }

  iterator &operator++(int){
    m_pos++;
    return *this;
  }
  iterator &operator++(){
    m_pos++;
    return *this;
  }

  T &operator*(){
    return m_ring.get(m_pos);
  }
  bool operator!=(const iterator &other)const{
    return m_pos != other.m_pos;
  }
};

#endif
