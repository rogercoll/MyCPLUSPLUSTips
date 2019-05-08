#include<iostream>
#include<typeinfo>
using namespace std;


int main(){
  string value;
  //in the following line we can see NAME MANGLING
  cout<<typeid(value).name()<<endl;
  decltype(value) name = "Bob";
  cout<<typeid(name).name()<<endl;
  cout<<name<<endl;
  return 0;
}
