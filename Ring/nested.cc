#include<iostream>
#include"ring.h"
using namespace std;




int main(){
  ring<string>myring(3);
  myring.add("un");
  myring.add("dos");
  myring.add("tres");
  myring.add("quatre");

  for(int i = 0; i < myring.size(); ++i){
    cout << myring.get(i) <<endl;
  }

  cout<<endl;

  cout<<myring[1]<<endl;

  cout<<endl;
  //C++98 style
  for(ring<string>::iterator it = myring.begin(); it != myring.end(); it++){
    cout<<*it<<endl;
  }
  cout<<endl;
  //C++11 style
  for(auto value:myring){
    cout<<value<<endl;
  }
  return 0;
}
