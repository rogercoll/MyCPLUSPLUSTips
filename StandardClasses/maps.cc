#include<iostream>
#include<map>
using namespace std;

//THE KEY IS UNIQUE
//THE MAPS SORTS BY THE KEY VALUE

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
    cout <<"Copying constructor running!"<<endl;
    name = other.name;
    age = other.age;
  }

  void print() {
    cout<<name<<": "<<age<<flush;
  }
};

class Person2{
private:
  string name;
  int age;

public:
  Person2(){
    name = "";
    age = 0;
  }
  Person2(string name1,int age1){
    name = name1;
    age = age1;
  }

  void print() const{
    cout<<name<<": "<<age<<flush;
  }

  //implementing less than operator for the class EVERYTHING MUST BE CONST
  //we implent the operator to let the map compare different Persons2 as a key
  bool operator<(const Person2 &other) const{
    if(name == other.name){
      return age < other.age;
    }
    return name < other.name;
  }
};

void custom_objects_as_map_keys(){
  //WHEN WE USE IT AS A KEY WE MUST CHANGE DE OBJECT BECAUSE BY DEFAULT C++ DOES NOT KNOW HOW TO COMPARE A CUSTOM OBJECT(CLASS)
  //SO WE CHANGE DE CLASS PERSON TO PERSON2

  map<Person2, string> votes;
  votes[Person2("Mike",40)] = "PP";
  votes[Person2("Mike",32)] = "ERC";
  votes[Person2("Roger",21)] = "Podemos";
  votes[Person2("Samuel",53)] = "Ciudadanos";
  votes[Person2("Jason",18)] = "PSOE";
  votes[Person2("Loco",23)] = "PSOE";

  for(map<Person2, string>::iterator it= votes.begin(); it!=votes.end(); it++){
    cout << it->second <<" : "<<flush;
    it->first.print();
    cout<<endl;
  }
}


void custom_objects_as_map_values(){
  map<string, Person> users;
  users["jk198"] =  Person("Mike",40);
  users["ak198"] =  Person("Roger",21);
  users["rwks12"] =  Person("Jul",21);

  users.insert(make_pair("kfdsl",Person(users["jk198"])));

  for(map<string,Person>::iterator it=users.begin(); it != users.end(); it++){
    cout<<"Username: "<<it->first<<" => "<<flush;
    it->second.print();
  }
}

void basic_maps(){
  map<string,int> ages;
  ages["Roger"] = 21;
  ages["Sussan"] = 32;

  cout<<ages["Roger"]<<endl;

  //if we try to acces to a key that does not exists it is added automatically to de map
  cout<<ages["Sue"]<<endl;
  //to solve that we use find
  if(ages.find("Pep") != ages.end()){
    cout<<"Found Pep"<<endl;
  }else{
    cout<<"Key not found"<<endl;
  }

  for(map<string,int>::iterator it=ages.begin(); it != ages.end(); it++){
    cout<<"Name: "<<it->first << " Age: "<<it->second<<endl;
  }
  pair<string,int>addToMap("Peter",18);
  ages.insert(addToMap);
  ages.insert(make_pair("Samuel",21));
  //nother way is creating a pair
  for(map<string,int>::iterator it=ages.begin(); it != ages.end(); it++){
    pair<string,int> age = *it;
    cout<<"Name: "<<age.first<< " Age: "<<age.second<<endl;
  }
}

int main(){
  //basic_maps();
  //custom_objects_as_map_values();
  custom_objects_as_map_keys();
  return 0;
}
