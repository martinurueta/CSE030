#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int arraySize; // Create a variable that will determine the size of array
    bool isIncrease = true; // default to true if array is increasing
    cout << "Enter the size of the array:";
    cin >> arraySize; // ask user for array size
    if (arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:";
    int array[arraySize]; // create array and add value
    for(int i = 0; i < arraySize; i++){// function to put integers in array 
        scanf ("%i",&array[i]);
    }
    for(int i = 1; i < arraySize; i++){// function to determine if it is an increasing array
       if ( array[i-1] > array[i]){
           isIncrease = false;
           break;
       }
    }
    if (isIncrease == false){// outputs if the array is increasing or not
        cout << "This is NOT an increasing array!" << endl;
    }else{
        cout << "This IS an increasing array!"<< endl;
    }
        for(int i = 0; i < arraySize; i++){// displays the array in the list
        cout << array[i] << " ";
    }
    return 0;
}