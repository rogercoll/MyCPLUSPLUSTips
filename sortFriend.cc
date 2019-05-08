#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Test{
private:
  string name;
public:
  Test(){
    name ="";
  }
  Test(string a){
    name = a;
  }
  void print(){
    cout<<name<<endl;
  }
  /*
  bool operator<(const Test &other)const{
    return name < other.name;
  }
  */
  //with friend you allow to that funcion/class to access to your class private members
  friend bool compare(const Test &test1, const Test &test2);
};

//IF THE IS NO OPERATOR DEFINED IN THE CLASS WE CAN DEFINE OUR OWN

bool compare(const Test &test1, const Test &test2){
  return test1.name < test2.name;
}

int main(){
  vector<Test> tests;
  tests.push_back(Test("Anna"));
  tests.push_back(Test("Youseff"));
  tests.push_back(Test("Roger"));
  tests.push_back(Test("Mariano"));

  //sort(tests.begin(),tests.end());

  sort(tests.begin(),tests.end(),compare);

  for(int i = 0; i < tests.size(); i++){
    tests[i].print();
  }
  Test test3("Rogeeer");
  Test test4("Ibrahim");
  test4 = test3;
  cout<<&test4<<endl;
  cout<<&test3<<endl;
  return 0;
}
