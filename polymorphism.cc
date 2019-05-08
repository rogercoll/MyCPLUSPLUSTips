#include<iostream>
using namespace std;


//The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.
//virtual functions are functions in the base class that you can override in derived classes



class Person{
public:
  Person(){}
  Person(const Person &other){
    cout<<"copy parent"<<endl;
  }
  virtual void print(){
    cout<<"I am a person!"<<endl;
  }
};

class Father: public Person{
public:
  void print(){
    cout<<"I am a person which is a father too!"<<endl;
  }
};

int main(){
  Father f1;
  Person &p1 = f1;
  p1.print();

  Person p2 = Father();
  p2.print();

  return 0;
}
