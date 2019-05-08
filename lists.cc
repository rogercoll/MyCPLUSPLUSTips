#include<iostream>
#include<list>
using namespace std;


//the main difference with vectors is that in list we can add elements in any positions, does not work like a block
//the is a pointer that points de previous and other for the next node in the list
//we can not use indexes
//WE MUST TAKE IN MIND THAT WHEN ITERATING THROUGH A LIST IN A LOOP IF WE DELETE ELEMENTS WE DON'T HAVE TO INCREMENT THE ITERATOR

int main(){
  list<int> numbers;
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_front(0);

  list<int>::iterator it=numbers.begin();
  it++;
  //it inserts the element in a new node just before the one is pointing
  numbers.insert(it,100);

//WE CANNNOT INCREMENT THE ITERATOR BY 2 LIKE VECTORS, WE MUST GO FROM ONE NODE TO THE NEXT ONE
  for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
    cout<< *it <<endl;
  }
  cout<<"Pointing at: "<<*it<<endl;
  //when deleting we must reset the iterator because it invalidates it when erasing
  it = numbers.erase(it);
  cout<<"Pointing at: "<<*it<<endl;


  for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
    cout<< *it <<endl;
  }

  return 0;
}
