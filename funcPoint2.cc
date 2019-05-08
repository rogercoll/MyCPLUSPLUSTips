#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool match(int num){
  return num >= 8;
}


bool match2(int num){
  return num >= 10;
}



//lets try to implenet template here
int count_ints(vector<int> &numbers, bool (*pMatch)(int test)){
  int result = 0;
  for(int i = 0; i < numbers.size(); ++i){
    if(pMatch(numbers[i])){
      ++result;
    }
  }
  return result;
}

int main(){
  vector<int> number;
  number.push_back(1);
  number.push_back(3);
  number.push_back(5);
  number.push_back(10);
  number.push_back(7);
  number.push_back(32);

  cout << count_if(number.begin(),number.end(),match) <<endl;

  //lets implement our own count_if
  cout << count_ints(number,match) <<endl;


  return 0;
}
