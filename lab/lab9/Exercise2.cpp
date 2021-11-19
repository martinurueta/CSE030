#include <iostream>
#include "Stack_char.h"

using namespace std;

int main(){
    Stack s;
    cout << s.isEmpty() << endl;
    s.push('A');
    s.push('Y');
    cout << s.size() << endl;
    s.pop();
    cout << s.isEmpty() << endl;
    s.push('D');
    cout<< s.top() << endl;
    s.push('T');
    s.pop();
    s.print();
    return 0;
}