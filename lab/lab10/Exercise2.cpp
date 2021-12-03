#include <iostream>
#include "Queue_char.h"
#include "LinkedList_char.h"

using namespace std;

int main(){
	Queue Q;
  Q.enqueue('D');
  cout << "Add D enqueue" << endl;
  cout << "sucessful dequeue" << endl;
  Q.enqueue('A');
  cout << "Add A enqueue" << endl;
  Q.dequeue();
  cout << "sucessful dequeue" << endl;
  cout << "The size of the Queue is " << Q.size() << endl; 
  Q.enqueue('D');
  cout << "Add D enqueue" << endl;
  if(!Q.isEmpty()){
    cout << "The Queue is NOT empty." << endl;

  }else{
    cout << "The Queue is empty!" << endl; // Queue empty
  }
  cout << "First in Queue is " << Q.front() << endl;
  Q.enqueue('T');
  cout << "Add T enqueue" << endl;
  cout << "First in Queue is " << Q.front() << endl;	
  return 0;
  }