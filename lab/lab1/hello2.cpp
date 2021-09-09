#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string First_Last, Name;
    // cout << "Please enter your name:" << endl;
    // cin >> Name;
    // cout << "Welcome to CSE030, " << Name << "!" << endl;
    cout << "Please enter your name:" << endl;
    getline(cin, First_Last);
    cout << "Welcome to CSE030, " << First_Last << "!" << endl;
    return 0;
}