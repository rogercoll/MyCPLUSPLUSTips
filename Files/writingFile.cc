#include<iostream>
#include<fstream>
using namespace std;




int main(){
  //fstream vs ofstream => ofstream can only used for outputting into a file(writing)
  ofstream outFile;
  string fileName = "example.txt";
  outFile.open(fileName,ios_base::app);
  if(outFile.is_open()){
    outFile << "Hello broh"<<endl;
    outFile << 123 <<endl;
    outFile.close();
  }else{
    cout<<"Could not open file: "<<fileName<<endl;
  }

  return 0;
}
