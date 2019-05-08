#include<iostream>
using namespace std;

//TEMPLATE FUNCTION
//we can change typename for class its the same, but as we can use primitive variables some people prefare typename
template<typename T>
void print(T n){
  cout<<"Template version: "<<n<<endl;
}

void print(int n){
  cout<<"Not template version: "<<n<<endl;
}

//WE CAN OVERLOAD FUNCTIONS AS AT LEAST THE ARGUMENT IS DIFFERENT TYPE

int main(){
  print<string>("Good morning!");
  print<int>(32);
  print(33);
  //forcing to use the template check in
  print<>(33);
  print("Good bye!");

  return 0;
}
