#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Test{
private:
  string name;
public:
  Test(string namee){
    name = namee;
  }
  ~Test(){
    //it autodestroies the objects and makes a shallow copy to the stack
    cout<<"Destroying object"<<endl;
  }
  void print(){
    cout<<name<<endl;
  }
};


int main(){
  //LIFO
  stack<Test> testStack;
  testStack.push(Test("Roger"));
  testStack.push(Test("Samu"));
  testStack.push(Test("Wardrove"));
  testStack.push(Test("Sue"));

  //if we pass by reference it is much more efficient because it does not make the copy
  //CHECK THE DIFFERENCE BY REMOVING THE &
  /** THIS IS INVALID CODE! OBJECT IS DETROYED.
  Test &test1 = testStack.top();
  test1.print();
  //while(tes)
  Test &test2 = testStack.top();
  test2.print();
  **/

  while(!testStack.empty()){
    Test &test = testStack.top(); //in a queue is the same but instead of top is front
    test.print();
    testStack.pop();
  }

  return 0;
}
