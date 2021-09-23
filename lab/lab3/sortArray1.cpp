#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int arraySize, key; // Create a variable that will determine the size of array
    int temp = 0;
    bool isIncrease = true; // default to true if array is increasing
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
    for(int i = 0; i < arraySize; i++){
        for(int g = i+1; g < arraySize; g++){
            if(array[g] < array[i]) {
            temp = array[i];
            array[i] = array[g];
            array[g] = temp;
            }
        }
    }
    cout << "This is the sorted array in an ascending order: ";
    for(int i = 0; i < arraySize; i++){// displays the array in the list
        cout << array[i] << " ";
    }
    cout << "The algorithm selected the minimum for the traverse of the array.";
    return 0;
}