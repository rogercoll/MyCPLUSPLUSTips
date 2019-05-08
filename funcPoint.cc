#include<iostream>
using namespace std;

void test(int value){
  cout <<"Hello "<<value<<endl;
}


int main(){
  //we define a function pointer that points to a void function without arguments
  void (*pTest)(int);
  //no es obligatori the reference to test
  pTest = &test;
  (*pTest)(3);

  void (*pTest2)(int) = test;
  pTest2(4);

  return 0;
}
