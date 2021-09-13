#include <iostream>
#include <string>

using namespace std;

int main(){
    int arraySize;
    int negCount = 0;
    string arrayRow;
    cout << "Enter the size of a 2D array:";
    cin >> arraySize;
    if (arraySize > 10 || arraySize < 1){
        if(arraySize > 10){
            cout << "ERROR: your array is too large! Enter 1 to 10";
            return 0;
        }else{
            cout << "you entered an incorrect value for the array size!";
            return 0;
        }
        
    }
    cin.ignore();
    int array[arraySize][arraySize];
     for (int i = 1; i <= arraySize; i++){
     cout << "Enter the values in the array for row " << i << " seperated by a space, and press enter:";
        for (int j = 0; j < arraySize; j++)
        {
        scanf ("%i",&array[i][j]);
        if (array[i][j] < 0){
            negCount++;
        }
    }
}
    if (negCount > 0){
        cout << "There are "<< negCount << " negative values!";
    }else{
        cout << "All values are non-negative!";
    }
    return 0;
}