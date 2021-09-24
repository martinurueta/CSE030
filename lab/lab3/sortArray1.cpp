#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int arraySize; // Create a variable that will determine the size of array
    int temp = 0;
    int min = 0;
    int pos = 0;
    cout << "Enter the size of the array:";
    cin >> arraySize; // ask user for array size
     cin.ignore();
    if (arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:";
    int array[arraySize]; // create array and add value
    int number = arraySize - 1;
    for(int i = 0; i < arraySize; i++){// function to put integers in array 
        scanf ("%i",&array[i]);
    }
    for(int i = number; i > -1; i--){
        for(int g = 0; g < i+1; g++){
            if(g == 0){
                min = array[i];
            }
            if (array[g] < min){
                min = array[g];
                pos = g;
            }
        }
        if(min < array[i] && pos != i){
                temp = array[i];
                array[i] = min;
                array[pos] = temp;
            }
    }
    cout << "This is the sorted array in an descending order: ";
    for(int i = 0; i < arraySize; i++){// displays the array in the list
        cout << array[i] << " ";
    }
    cout << endl << "The algorithm selected the maximum for the traverse of the array.";
    return 0;
}