#include <iostream>
#include <string>
#include <fstream>
#include <assert.h>

using namespace std;
    void binarySearchR(string *array, int min, int max, string key){
        int mid = 0;
        if (array[0] < array[1]){
            while(max - min > 0){//acending
                mid = ((max - min) / 2) + min;
                if (key == array[mid]){
                    cout << "Found key "<< key << " at index " << mid <<"!";
                    break;
                }else{
                    if (key > array[mid]){
                        min = mid;
                    }else if(key < array[mid]){
                        max = mid;
                    }
                }
            }
            if(key != array[mid]){
                cout << "The key "<< key << " was not found in the array!";
            }
        }else{
            while(max - min > 0){//decending
                mid = ((max - min) / 2) + min;
                if (key == array[mid]){
                    cout << "Found key "<< key << " at index " << mid <<"!";
                    break;
                }else{
                    if (key > array[mid]){
                        max = mid;
                    }else if(key < array[mid]){
                        min = mid;
                    }
                }
            }
            if(key != array[mid]){
                cout << "The key "<< key << " was not found in the array!";
            }
        }
    }

    void checkArraySort(string *array, int arraySize, string key){
        int sort = 0;
        for(int i = 1; i < arraySize; i++){
            if(array[i] > array[i-1]){
                sort++;
            }else if(array[i] < array[i-1]){
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