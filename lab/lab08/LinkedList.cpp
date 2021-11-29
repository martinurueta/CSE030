#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList(){
    first = NULL;
    last = NULL;
}
LinkedList::~LinkedList(){
    while(!isEmpty()){
        removeFromBack();
    }
}
void LinkedList::insertAtBack(int valueToInsert){
    if (isEmpty()){
        first = new Node;
        first->val = valueToInsert;
        last = first;
    }else{
        last->next = new Node;
        last = last->next;
        last->val = valueToInsert;
    }
}
bool LinkedList::removeFromBack(){
    if(isEmpty()){
        return false;
    }
    if (first == last){
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }else{
        Node *temp = first;
        for(int i = 1; i < size()-1; i++){
            temp = temp->next;
        }
        delete last;
        last = temp;
        return true;
    }
}
void LinkedList::print(){
    Node *temp = first;

    while(temp != last){
        cout << temp->val << ",";
        temp = temp->next;
    }
    if(last != NULL){
        cout << last->val;
    }
}
bool LinkedList::isEmpty(){
    if(first == NULL){
        return true;
    }
    return false;
}
int LinkedList::size(){
    Node *temp = first;
    int count = 0;
    if(!isEmpty()){
        count++;
        while (temp != last){
            temp = temp->next;
            count++;
        }
    }
    return count;
}
void LinkedList::clear(){
    while(!isEmpty()){
        removeFromBack();
    }
}
void LinkedList::insertAtFront(int valueToInsert){
    if (isEmpty()){
        first = new Node;
        first->val = valueToInsert;
        last = first;
    }else{
        Node *temp = first;
        first = new Node;
        first->val = valueToInsert;
        first->next = temp;
    }

}
bool LinkedList::removeFromFront(){
    if(isEmpty()){
        return false;
    }else if (size()==1){
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }else{
        Node *temp = first;
        first = first->next;
        delete temp;
        return true;
    }

}


