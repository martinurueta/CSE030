#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int i;
    int g = 0;
    cout << "Enter the number of lines for the punishment." << endl;
    cin >> i;
    if (i >= 0){
        while (g != i){
        cout << "I will always use object oriented programming.";
        g++;
        }
    }
    else{
        cout << "You entered an incorrect value for the number of lines!";
    }
}