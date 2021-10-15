#include <iostream>
#include <string>
#include <fstream>
#include <assert.h>

using namespace std;
    void binarySearchR(string *array, int min, int max, string key){
        int mid = ((max - min) / 2) + min;
        if(max - min > 0){
            if(array[0] < array[1]){ // if it is accending
                if (key == array[mid]){
                    cout << "Found key "<< key << " at index " << mid <<"!";
                }else{
                    if (key > array[mid]){// if key is greater than array mid change mid with min
                        min = mid;
                        binarySearchR(array, min, max, key);
                    }else if(key < array[mid]){// if key is less than array mid change mid with max
                        max = mid;
                        binarySearchR(array, min, max, key);
                    }
                }
            }else{ // if it is decending
                if (key == array[mid]){
                    cout << "Found key "<< key << " at index " << mid <<"!";
                }else{
                    if (key > array[mid]){// if key is greater than array mid change mid with max
                        max = mid;
                        binarySearchR(array, min, max, key);
                    }else if(key < array[mid]){// if key is less than array mid change mid with min
                        min = mid;
                        binarySearchR(array, min, max, key);
                    }
                }
            }
        }else{
            cout << "The key "<< key << " was not found in the array!";
        }
    }

    void checkArraySort(string *array, int arraySize, string key){
        int sort = 0;
        for(int i = 1; i < arraySize; i++){
            if(array[i] > array[i-1]){// if it is accending
                sort++;
            }else if(array[i] < array[i-1]){// if it is decending
                sort--;
            }
        }
        if(sort == (arraySize-1)){
            binarySearchR(array, 0, arraySize, key);
        }else if (sort == -(arraySize-1)){
            binarySearchR(array, 0, arraySize, key);
        }else{
            cout << "Error";
        }
    }

int main(){
    ifstream file;
    string data;
    string *array;
    string key;
    int arraySize = 0;
    int result;
    file.open("words_in.txt");

    while(!file.eof()){
        file >> data;
        arraySize ++;
    }
    file.close();

    file.open("words_in.txt");

    array = new string [arraySize];
    for(int i = 0; i < arraySize; i++){
        file >> array[i];
    }
    cout << "Enter key:";
    cin >> key;

    checkArraySort(array, arraySize, key);
    return 0;
}