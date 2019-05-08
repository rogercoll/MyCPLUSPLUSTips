#include<iostream>
#include<exception>
using namespace std;


void goWrong(){
  bool error1 = true;
  bool error2 = false;

  if(error1){
    throw bad_alloc();
  }
  if(error2){
    throw exception();
  }

}

int main(){

  //TO RUN CORRECTLY THIS PROGRAM WE SHOULD CHAGE THE ORDER OF THE CATCHES BECAUSE bad_alloc IS A SUBCLASS OF EXCEPTION AND
  //IT ENTERS TO THE FIRST CATCH INSTEAD OF THE SECOND ONE WHEN WE THROW bad_alloc(THE COMPILER ADVERTISE US)
  try{
    goWrong();
  }
  catch(exception &e){
    cout<<"Catching exception: "<<e.what()<<endl;
  }
  catch(bad_alloc &e){
    cout<<"Catching bad_alloc: "<<e.what()<<endl;
  }
  return 0;
}
