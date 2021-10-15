#include <iostream>
#include <string>
#include <fstream>
#include <assert.h>

using namespace std;
    int checkArraySort(string *array, int arraySize){
        int sort;
        for(int i = 1; i < arraySize; i++){
            if(array[i] > array[i-1]){// if it is accending
                sort++;
            }else if(array[i] < array[i-1]){// if it is decending
                sort--;
            }
        }
        if(sort == (arraySize-1)){// if it is accending output 1
            return 1;
        }else if (sort == -(arraySize-1)){// if it is accending output 1
            return -1;
        }else{ // if no condition work output 0
            return 0;
        }
    }

int main(){
    string *array;
    int arraySize;
    int result;
    cout << "Enter the size of the array:";
    cin >> arraySize; // ask user for array size
    cin.ignore();
    if (arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:";
    array = new string [arraySize]; // create array and add value
    for(int i = 0; i < arraySize; i++){// function to put string
        cin >> array[i];
    }
    result = checkArraySort(array, arraySize);
    if (result == 0){// output result
        cout << "The array is not sorted!";
    }else if (result == 1){
        cout << "The array is sorted in ascending order!";
    }else if (result == -1){
        cout << "The array is sorted in descending order!";
    }
    return 0;
}