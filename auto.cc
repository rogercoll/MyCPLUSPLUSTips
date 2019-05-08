#include<iostream>
#include<typeinfo>

using namespace std;


//creating a funtion which we don't know absolutely nothing of the input type
template <class T>
auto test(T value) -> decltype(value){
  return value;
}


int main(){
  auto alo = 7;
  cout<<alo<<endl;
  cout<<typeid(alo).name()<<endl;
  cout<<test("Hello world!")<<endl;
  return 0;
}
