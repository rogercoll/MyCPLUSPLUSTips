#include<iostream>
#include<fstream>
using namespace std;




int main(){
  //if we use ifstream instead of fstream we dont need to use "ios::in"
  string fileName ="example.txt";
  fstream inFile;
  inFile.open(fileName,ios::in);
  if(inFile.is_open()){
    string word;
    inFile >> word;
    cout <<word<<endl;
    string line;
    while(!inFile.eof()){
      getline(inFile,line);
      cout <<line<<endl;
    }
    inFile.close();
  }else{
    cout<<"Could not open file: "<<fileName<<endl;

  }


  return 0;
}
