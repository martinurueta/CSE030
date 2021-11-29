#ifndef _NODE_H
#define _NODE_H

#include "LinkedList_char.h"

class Stack : public LinkedList
{
	public:
		Stack();
		~Stack();
		void push(char valueToPush);
		char pop();
		char& top();
};
#endif