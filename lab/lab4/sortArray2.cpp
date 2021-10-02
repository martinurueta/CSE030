#include <iostream>
#include <string>
 
using namespace std;

void InsertionSort(int array[], int arraySize){
    int copy, choice, path;
    cout << "Sort in ascending (0) or descending (1) order?";
    cin >> choice;
    if (choice == 0){
        for(int i = 1; i < arraySize; i++){
            copy = array[i];
            path = i;
            while(path > 0 && array[path-1] > copy){
                array[path] = array[path-1];
                path = path-1;
            }
            array[path] = copy;
    }
        cout << "This is the sorted array in an acending order: ";
        for(int i = 0; i < arraySize; i++){// displays the array in the list
            cout << array[i] << " ";
        }
    }else if(choice == 1){
        for(int i = 1; i < arraySize; i++){
            copy = array[i];
            path = i;
            while(path > 0 && array[path-1] < copy){
                array[path] = array[path-1];
                path = path-1;
            }
            array[path] = copy;
    }
        cout << "This is the sorted array in an descending order: ";
        for(int i = 0; i < arraySize; i++){// displays the array in the list
            cout << array[i] << " ";
        }
    }else{
        cout << "Error";
    }
}
 
int main() {
    int arraySize; // Create a variable that will determine the size of array

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
    InsertionSort(array, arraySize);
    return 0;


}