#include<iostream>
#include<exception>
using namespace std;

//amb el MyException estem definint com un bad_alloc vist en standardException2.cc

class MyException: public exception{
public:
  virtual const char* what() const throw(){
    return "Something bad happended";
  }
};

class Test{
public:
  void goesWrong(){
    throw MyException();
  }
};

int main(){

  Test test;

  try{
    test.goesWrong();
  }
  catch(MyException &e){
    cout<<e.what()<<endl;
  }

  return 0;
}
