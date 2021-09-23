#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int arraySize, key; // Create a variable that will determine the size of array
    int counter = 0;
    cout << "Enter the size of the array:";
    cin >> arraySize; // ask user for array size
     cin.ignore();
    if (arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:";
    int array[arraySize]; // create array and add value
    for(int i = 0; i < arraySize; i++){// function to put integers in array 
        scanf ("%i",&array[i]);
    }
    cout << "Enter a number to search for in the array:";
    cin >> key;
    for(int i = 0; i < arraySize; i++){
        if(key == array[i]){
            counter++;
            break;
        }else{
            counter++;
        }
    }
    cout << "Found value "<< key <<" at index " << counter - 1 << " which took " << counter <<" checks.";
    if(counter == arraySize){
        cout << "We ran into the worst case scenario!";
    }else if(counter == 1){
        cout << "We ran into the best case scenario!";
    }
    return 0;
}