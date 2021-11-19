#include "Stack_char.h"
#include "LinkedList_char.h"
#include <iostream>
using namespace std;

Stack::Stack(){

}
Stack::~Stack(){

}

void Stack::push(char valueToPush){
    LinkedList::insertAtFront(valueToPush);
}

char Stack::pop() 
{
	char pop = last->val;
	LinkedList::removeFromFront();
	return pop;
}

char& Stack::top() 
{
	return first->val;
}