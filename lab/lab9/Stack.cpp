#include "Stack.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

Stack::Stack(){

}
Stack::~Stack(){

}

void Stack::push(int valueToPush){
    LinkedList::insertAtFront(valueToPush);
}

int Stack::pop() 
{
	int pop = last->val;
	LinkedList::removeFromFront();
	return pop;
}

int& Stack::top() 
{
	return first->val;
}