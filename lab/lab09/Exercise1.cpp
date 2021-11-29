#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
	
	Stack s;	
	
	for(int i = 10; i > 0; i--){
		s.push(i);
		cout << "Item " << i << "added" << endl; 
	}	//element of 10
	
	cout << "Calling top to return to the top of the stack " << s.top() << endl;
		
	cout << "The size of the stack is " << s.size() << endl; //size of stack
		
	if(!s.isEmpty()){
		cout << "The stack is NOT empty." << endl;
		
	} else
		cout << "The stack is empty!" << endl; // stack empty
	
	cout << "Print of the Stack: ["; //print of stack
	s.print();
	cout << "]" << endl;
		
    cout << s.pop() << " successfully popped." << endl;
    
    cout << "Here's the stack: ["; 
    s.print();
    cout << "]" << endl;
	
	
	if(s.isEmpty()) //checks if it works correctly
		cout << "The stack IS empty." << endl;
	else
		cout << "The stack is NOT empty" << endl;
	
	return 0;
	}