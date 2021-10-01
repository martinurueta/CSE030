#include <iostream>
#include <string>

using namespace std;

int main(){
    int repeat = 0;
    string original, combined; // create variable for original string and reverse string
    cout << "Enter the string:"; // ask user to create word or phrase to reverse
    getline(cin, original);
    cout << "Enter a number of times:";
    cin >> repeat;
    for(int i = 0; i < repeat; i++){
        combined += original;
    }
    cout << combined;// outputs user in reverse of their phrase
    return 0;
}