#include<iostream>
using namespace std;

class Person{
private:
  string name;
  int age;

public:
  Person(){
    name = "";
    age = 0;
  }
  Person(string name1,int age1){
    name = name1;
    age = age1;
  }
  Person(const Person &other){
    *this = other;
  }

  void print() {
    cout<<name<<": "<<age<<flush;
  }
  //OFSTREAM IS THE TYPE OF COUT
  friend ostream &operator<<(ostream &out, const Person &test){
    out<<test.name<<" : "<<test.age;
    return out;
  }
};


int main(){
  Person person1("Roger",21);
  cout<<person1<<endl;
  return 0;
}
