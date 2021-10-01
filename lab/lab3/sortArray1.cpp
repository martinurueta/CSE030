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
    if (arraySize < 0){// if array size is less than 0 output error
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:"; // ask user for array values
    int array[arraySize]; // create array and add value
    int number = arraySize - 1;
    for(int i = 0; i < arraySize; i++){// function to put integers in array 
        scanf ("%i",&array[i]);
    }
    for(int i = number; i > -1; i--){//algorithm for array desending order
        for(int g = 0; g < i+1; g++){
            if(g == 0){// create a default value at the end of the array
                min = array[i];
            }
            if (array[g] < min){// if min value is greater than array value, we put a new min value
                min = array[g];
                pos = g;
            }
        }
        if(min < array[i] && pos != i){// this is to check if minimum number is not in the last number in the array, if not we continue with the condition of swap two number
                temp = array[i];// we swap the array value and the min value positions in the array in order to sort it
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