#include <iostream>
#include <string>

using namespace std;

int main(){
    int arraySize;
    int negCount = 0;
    string arrayRow;// create variables
    cout << "Enter the size of a 2D array:";// ask user the size of the array
    cin >> arraySize;
    if (arraySize > 10 || arraySize < 1){// check if the condition is met for the size entered. 0 < Size <= 10 
        if(arraySize > 10){
            cout << "ERROR: your array is too large! Enter 1 to 10";
            return 0;
        }else{
            cout << "you entered an incorrect value for the array size!";
            return 0;
        }
        
    }
    cin.ignore();
    int array[arraySize][arraySize]; // create 2d array
     for (int i = 1; i <= arraySize; i++){// get the array of each row ask to user
     cout << "Enter the values in the array for row " << i << " seperated by a space, and press enter:";
        for (int j = 0; j < arraySize; j++)
        {
        scanf ("%i",&array[i][j]);
        if (array[i][j] < 0){ // check if there are negative in the rows
            negCount++;
        }
    }
}
    //output if there are negative numbers and the amount there is
    if (negCount > 0){
        cout << "There are "<< negCount << " negative values!";
    }else{
        cout << "All values are non-negative!";
    }
    return 0;
}