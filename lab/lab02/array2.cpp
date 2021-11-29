#include <iostream>
#include <string>

using namespace std;

int main(){
    string original, reverse; // create variable for original string and reverse string
    cout << "Enter the string to reverse:"; // ask user to create word or phrase to reverse
    getline(cin, original);
    for(int i = original.size(); i > -1; i--){ // go to the last letter in the string orignal and add it to the new string and push back
        reverse.push_back(original[i]);
    }

    cout << reverse;// outputs user in reverse of their phrase


    return 0;
}