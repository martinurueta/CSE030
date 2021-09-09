#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int arraySize; // Create a variable that will determine the size of array
    string values;
    int j = 0;
    bool isIncrease = true; // default to true if array is increasing
    cout << "Enter the size of the array:";
    cin >> arraySize; // ask user for array size
    if (arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:";
    cin.ignore();
    getline(cin, values);
    int array[arraySize] = {0}; // create array and add value
    for(int i = 0; i < values.size(); i++){// function to replace spaces to commas 
        if (values[i] != 32){
            array[j] = array[j] * 10 + (values[i]-48);// convert string to integer in the array
            j++;
        }
    }
    for(int i = 1; i < arraySize; i++){// function to determine if it is an increasing array
       if ( array[i-1] > array[i]){
           isIncrease = false;
           break;
       }
    }
    if (isIncrease == false){
        cout << "This is NOT an increasing array!" << endl;
    }else{
        cout << "This IS an increasing array!"<< endl;
    }
        for(int i = 0; i < arraySize; i++){
        cout << array[i] << " ";
    }
    return 0;
}