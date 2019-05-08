#include<iostream>
#include<fstream>
using namespace std;

//the only difference between a struct and a class is that the members of struct are public by default(quite used to write into files)
//If we want to write to a file exactly those bytes and not 64 we must add this pragma
//the 1 aligns in boundaries of 1 byte
#pragma pack(push,1)
struct Person{
  char name[50];
  int age;
  double weight;
};
#pragma pack(pop)
//with this last pragma we disable the alginment of 1 byte for the rest of the program
struct Person2{
  char name[50];
  int age;
  double weight;
};

//when we declare an empty string normally is pointer in the stack that points to the heap that with a new allocates memory
int main(){

  //here we are gonna demostrate that c++ by default padds more memory on struct for efficient memory transfer(it should be 62 not 64)
  cout <<sizeof(Person2)<<endl;
  cout <<sizeof(Person)<<endl;
  cout <<sizeof(char)<<endl;
  cout <<sizeof(int)<<endl;
  cout <<sizeof(double)<<endl;

  Person presidentUSA = {"Donald",52,100.55};

  fstream outFile;
  string fileName = "example.bin";
  outFile.open(fileName,ios::binary|ios::out);
  if(outFile.is_open()){
    //outFile.write((char *)&presidentUSA,sizeof(Person));
    //same as before
    outFile.write(reinterpret_cast<char *>(&presidentUSA),sizeof(Person));
    outFile.close();
  }else{
    cout<<"Could not open file: "<<fileName<<endl;
  }

  Person presdientEx = {};

  fstream inFile;
  inFile.open(fileName,ios::binary|ios::in);
  if(inFile.is_open()){
    inFile.read(reinterpret_cast<char *>(&presdientEx),sizeof(Person));
    inFile.close();
  }else{
    cout<<"Could not open file: "<<fileName<<endl;
  }

  cout<<presdientEx.name<<" "<<presdientEx.age<<" "<<presdientEx.weight<<endl;

  return 0;
}
