#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int punishment, error;
    int g = 0;
    cout << "Enter the number of lines for the punishment." << endl;
    cin >> punishment;
    if (punishment < 0){
        cout << "You entered an incorrect value for the number of lines!";
        return 0;
    }
    cout << "Enter the line for which we want to make a typo:";
    cin >> error;
    if (error < 0){
        cout << "You entered an incorrect value for the line typo!";
        return 0;
    }
    if (punishment >= 0 && error >=0){
        while (g != punishment){
            if(g == error -1){
                cout << "I will always use object oriented programing.";
            }else{
                cout << "I will always use object oriented programming.";
            }
            g++;
        }
    }
    return 0;
}