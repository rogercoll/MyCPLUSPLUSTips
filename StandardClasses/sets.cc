#include<iostream>
#include<set>
using namespace std;


//sets only stores unique elements
//VERY USEFUL FOR UNIQUE OBJECTS
//IT ORDERS THE ELEMENTS ASCENDING ORDER

class Test{
  int id;
  string name;
public:
  Test(){
    name="";id=0;
  }
  Test(int idd,string namee){
    id = idd; name = namee;
  }
  void print()const{
    cout<<id<<" : "<<name<<flush;
  }
  bool operator<(const Test &other)const{
    if(name == other.name){
      return id < other.id;
    }
    return name < other.name;
  }
};

int main(){
  set<int> numbers;

  numbers.insert(50);
  numbers.insert(30);
  numbers.insert(30);
  numbers.insert(20);
  numbers.insert(10);
  numbers.insert(5);

  for(set<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
    cout<<*it<<endl;
  }
  set<int>::iterator its = numbers.find(20);
  if(its != numbers.end()){
    cout<<"Number "<<*its<<" found"<<endl;
  }

  if(numbers.count(10)){
    cout<<"Found"<<endl;
  }

  set<Test> tests;
  tests.insert(Test(10,"Mike"));
  tests.insert(Test(20,"Pole"));
  tests.insert(Test(30,"Samu"));
  tests.insert(Test(23,"Samu"));
  tests.insert(Test(3,"Roger"));

  for(set<Test>::iterator it=tests.begin(); it != tests.end(); it++){
    it->print();
    cout<<endl;
  }

  return 0;
}
