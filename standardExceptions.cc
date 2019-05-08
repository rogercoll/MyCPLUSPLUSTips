#include<iostream>
using namespace std;



void mightGoWrong(){
  //can be a serious error which program can recover from(ex: allocation memory)
  bool error = false;
  bool error2 = true;

  if(error){
    throw "Big error broh";
  }
  if(error2){
    throw string("That is a string error");
  }

}

void usesmigthGoWrong(){
  mightGoWrong();
}

int main(){
  try{
    usesmigthGoWrong();
  }
  catch(int e){
    cout <<"Error code: "<<e<<endl;
  }
  catch(char const *e){
    cout<<"Error message: "<<e<<endl;
  }
  catch(string &e){
    cout<<"String error "<<e<<endl;
  }
  cout <<"Still running"<<endl;

  return 0;
}
