#include<iostream>
using namespace std;


//abstract class is a class that have at least one pure function

class Animal{
public:
  //this is a pure function in c++ which means there is no implementation in that class for this function
  virtual void speak() = 0;
  virtual void speed() = 0;
};

class Dog: public Animal{
public:
  void speak(){
    cout<<"Wooooof!"<<flush;
  }
};

class Labrador: public Dog{
public:
  Labrador(){
    cout<<"New labrador"<<endl;
  }
  void speed(){
    cout<<"I can run out to 34km/h"<<endl;
  }
};

void test(Animal &a){
  a.speed();
}


int main(){
  Labrador d1;
  d1.speak();
  cout<<endl;
  d1.speed();

  Animal *animals[5];
  animals[0] = &d1;
  animals[0]->speak();

  test(d1);
  return 0;
}
