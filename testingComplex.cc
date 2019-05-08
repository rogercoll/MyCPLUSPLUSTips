#include<iostream>
#include"complex.h"
using namespace std;




int main(){
  Complex c1(2,3);
  Complex c2 = c1;
  Complex c3 = c1+c2;
  c1 = c2;
  cout<<c1<<endl;
  cout<<c1+c2+c3<<endl;

  Complex c4(12,12);
  c4 = c4 + 10;
  cout<<c4<<endl;

  //TESTING THE OTHER SIDE OVERRITING SUM OPERATOR

  c4 = 10 + c4;
  cout<<c4<<endl;
  cout<<7+c1+c2+8+9+c2<<endl;

  if(c1 == c2){
    cout<<"They are equal"<<endl;
  }else{
    cout<<"They are not equal"<<endl;
  }

  if(c3 != c4){
    cout<<"They not are equal"<<endl;
  }else{
    cout<<"They are equal"<<endl;
  }

  return 0;
}
