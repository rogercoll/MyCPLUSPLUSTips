#include<iostream>
#include<map>
using namespace std;

//MULTIMAP ALLOWS MULTIPLE INSTANCES OF A KEY IN THE SAME MAP


int main(){
  multimap<int, string> lookup;
  lookup.insert(make_pair(10,"Mike"));
  lookup.insert(make_pair(20,"Jonny"));
  lookup.insert(make_pair(10,"Roger"));
  lookup.insert(make_pair(30,"Manu"));
  lookup.insert(make_pair(5,"Young"));


  for(multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++){
    cout<<it->first<<" : "<<it->second<<endl;
  }
  cout<<endl;
  //from the first 10 till the end of the map
  for(multimap<int, string>::iterator it = lookup.find(10); it != lookup.end(); it++){
    cout<<it->first<<" : "<<it->second<<endl;
  }
  cout<<endl;
  //now we get the range of key 10
  pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(10);
  for(multimap<int, string>::iterator it = its.first; it != its.second; it++){
    cout<<it->first<<" : "<<it->second<<endl;
  }
  //c++11
  auto its2 = lookup.equal_range(10);
  for(multimap<int, string>::iterator it = its2.first; it != its2.second; it++){
    cout<<it->first<<" : "<<it->second<<endl;
  }
  return 0;
}
