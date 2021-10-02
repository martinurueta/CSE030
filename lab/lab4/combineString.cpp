#include <iostream>
#include <string>

using namespace std;
void combineStr(){
    int repeat = 1;
    string original, combined; // create variable for original string and reverse string
    while(repeat > 0){
    cout << "Enter the string:"; // ask user to create word or phrase to reverse
    getline(cin, original);
    cout << "Enter a number of times:";
    cin >> repeat;
    for(int i = 0; i < repeat; i++){
        combined += original;
    }
    cout << combined<< endl;// outputs user in reverse of their phrase

    cin.ignore();
    combined.clear();
    }
}
int main(){
    combineStr();
    return 0;
}