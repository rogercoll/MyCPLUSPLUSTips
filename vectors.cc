#include<iostream>
#include<vector>
using namespace std;


//la capacitat va creixent exponsensialment a la vegada que afegim elements, per tal de no anar fent copies del vector
//no es pot disminuir la capacitat d'un vector, s'ha de fer un resize
//reserve es per augemntar la capacitat d'un vector => v.reserve(100)

int main(){
  vector<string> strings;
  cout<<"Capacity: "<<strings.capacity()<<endl;
  cout<<strings.size()<<endl;
  strings.push_back("hello");
  strings.push_back("hello");
  strings.push_back("hello");

  cout<<strings.size()<<endl;
  cout<<"Capacity: "<<strings.capacity()<<endl;

  //Two types of iteration
  for(int i=0; i< strings.size();i++){
    cout<<strings[i]<<endl;
  }
  //it.end points after the last element
  for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
    cout<<*it<<endl;
  }

  return 0;
}
