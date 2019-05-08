#include<iostream>
using namespace std;

template<class T>
class Test{
private:
  T obj;
public:
  Test(T obj){
    //aqui utilitzem this per saber de quin obj estem parlant
    this->obj = obj;
  }
  void print(){
    //susposem que l'ususari sap que el tipus de class que passa té implementat l'operador << (com int,string,double,etc)
    cout<<obj<<endl;
  }
};


int main(){
  Test<string> test1("hello");
  test1.print();
  Test<int> test2(32);
  test2.print();
  return 0;
}
