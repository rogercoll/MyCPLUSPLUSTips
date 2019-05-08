#include<iostream>
#include<vector>
using namespace std;




int main(){
  //first de number of rows and them the number of columns for each row, and we set it to 0
  vector<vector<int> > matrix(3, vector<int>(4,0));
  matrix[1].push_back(8);
  for(int i = 0; i < matrix.size(); ++i){
    for(int j = 0; j < matrix[i].size(); ++j){
      cout<<matrix[i][j]<<flush;
    }
    cout<<endl;
  }
  return 0;
}
