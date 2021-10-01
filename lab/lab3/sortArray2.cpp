#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int arraySize; // Create a variable that will determine the size of array
    int temp = 0;
    int max = 0;
    int pos = 0;
    int counter = 0;
    cout << "Enter the size of the array:";
    cin >> arraySize; // ask user for array size
    cin.ignore();
    if (arraySize < 0){// error if array size is less than zero
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:";
    int array[arraySize]; // create array and add value
    int number = arraySize - 1;
    for(int i = 0; i < arraySize; i++){// function to put integers in array 
        scanf ("%i",&array[i]);
    }
    for(int i = number; i > -1; i--){// algorithm to sort array in ascending order 
        for(int g = 0; g < i+1; g++){
            if(g == 0){// create a maxium default value at the end of the array
                max = array[i];
            }
            if (array[g] > max){// if the a number in the array is bigger than the maxium value it creates a new max value
                max = array[g];
                pos = g;
            }
        }
        if(max > array[i] && pos != i){// if the new max value is not at the end of the array continue the function
                temp = array[i];// we swap the old max value to the new max value positions in the array in order to sort the function
                array[i] = max;
                array[pos] = temp;
                counter++;// the amount of time it takes this algorithm to sort through the list
            }
    }
    cout << "This is the sorted array in an ascending order: ";
    for(int i = 0; i < arraySize; i++){// displays the array in the list
        cout << array[i] << " ";
    }
    cout << endl << "The algorithm selected the minimum for the traverse of the array."<<endl;
    cout << "It took "<<counter<<" swaps to sort the array...";// outputs the amount of swaps done
    return 0;
}