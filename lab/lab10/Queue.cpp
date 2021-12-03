#include "Queue.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

Queue::Queue(){

}
Queue::~Queue(){

}
void Queue::enqueue(int value){
  insertAtBack(value);

}
int Queue::dequeue(){
    int n = first->val;
    removeFromFront();
    return n;
}
int& Queue::front(){
    return first->val;
}
