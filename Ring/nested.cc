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

  cout<<myring[1]<<endl;

  return 0;
}
