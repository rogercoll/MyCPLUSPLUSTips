#include<iostream>
using namespace std;


class CanGoWrong{
  public:
    CanGoWrong(){
      //after new we need always a delete to free the memory
      char *pMemory = new char[9999999999999999];
      delete []pMemory;
    }
};

int main(){
  try{
    CanGoWrong wrong;
  }
  catch(bad_alloc &e){
    cout<<"Excpetion: "<< e.what() <<endl;
  }
  cout <<"Still running"<<endl;

  return 0;
}
