#include <iostream>
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

int main(){
	Queue Q;
	for(int i = 10; i > 0; i--){
		Q.enqueue(i);
		cout << "Item " << i << " added" << endl; 
	}	//element of 10
  Q.dequeue();
  cout << "sucessful dequeue" << endl;
  Q.enqueue(4);
  cout << "Add 4 enqueue" << endl;
  Q.enqueue(1);
  cout << "Add 1 enqueue" << endl;
  Q.dequeue();
  cout << "sucessful dequeue" << endl;
  cout << "The size of the Queue is " << Q.size() << endl; 
  Q.enqueue(4);
  cout << "Add 4 enqueue" << endl;
  if(!Q.isEmpty()){
    cout << "The Queue is NOT empty." << endl;

  }else{
    cout << "The Queue is empty!" << endl; // Queue empty
  }
  cout << "First in Queue is " << Q.front() << endl;
  Q.enqueue(20);
  cout << "First in Queue is " << Q.front() << endl;	
  return 0;
  }