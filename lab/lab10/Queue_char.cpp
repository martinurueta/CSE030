#include "Queue_char.h"
#include "LinkedList_char.h"
#include <iostream>
using namespace std;

Queue::Queue(){

}
Queue::~Queue(){

}
void Queue::enqueue(char value){
  insertAtBack(value);

}
char Queue::dequeue(){
    char n = first->val;
    removeFromFront();
    return n;
}
char& Queue::front(){
    return first->val;
}
