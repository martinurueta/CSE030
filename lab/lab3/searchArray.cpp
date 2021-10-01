#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int arraySize, key; // Create a variable that will determine the size of array
    int counter = 0;
    cout << "Enter the size of the array:";
    cin >> arraySize; // ask user for array size
     cin.ignore();
    if (arraySize < 0){// if arraysize is less than zero output error
        cout << "ERROR: you entered an incorrect value for the array size!";
        return 0;
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter:";
    int array[arraySize]; // create array and add value
    for(int i = 0; i < arraySize; i++){// function to put integers in array 
        scanf ("%i",&array[i]);
    }
    cout << "Enter a number to search for in the array:";// ask user for key to find in the array
    cin >> key;
    for(int i = 0; i < arraySize; i++){// algorithm to find key in the array
        if(key == array[i]){// if the key is equal to the array value we end the loop and output the amount of counts to find it
            counter++;
            break;
        }else{// else the counter goes up and checks again
            counter++;
        }
    }
    cout << "Found value "<< key <<" at index " << counter - 1 << " which took " << counter <<" checks.";// once found it outputs the index, the key, and the amount of counts
    if(counter == arraySize){// if it took the longest to find the key in the array output this statement
        cout << "We ran into the worst case scenario!";
    }else if(counter == 1){// if it took the shortest to find the key in the array output this statement
        cout << "We ran into the best case scenario!";
    }
    return 0;
}