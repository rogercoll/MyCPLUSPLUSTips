#include<iostream>
using namespace std;

//struct methods are public by default, not in classes
//the idea of this program is that we can implement diferent MatchTest for the same Test, we only have to pass a "function"

struct Test{
  virtual bool operator()(string &text)=0;
  virtual ~Test(){}
};

struct MatchTest: public Test {
  //overload brakets operator, the seconds brakets are for arguments
  bool operator()(string &text) {
    return text == "lion";
  }
};

void check(string text, Test &test){
  if(test(text)){
    cout<<"Test matches!"<<endl;
  }
  else{
    cout<<"No match!"<<endl;
  }
}


int main(){
  MatchTest pred;
  string value = "lion";
  check(value,pred);
  return 0;
}
