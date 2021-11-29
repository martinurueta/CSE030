#include <iostream>
#include <string>
#include <fstream>
#include <assert.h>

using namespace std;

int main(){
    ifstream file;
    string data;
    int count = 0;
    string *words;
    file.open("words_in.txt");

    while(!file.eof()){// count amount of line in file
        file >> data;
        count ++;
    }
    file.close();

    file.open("words_in.txt");

    words = new string [count]; // create size of array with counter
    for(int i = 0; i < count; i++){// put line by line in array
        file >> words[i];
    }
    for(int i = 0; i < count; i++){// output array
        cout << words[i]<<" ";
    }
    return 0;
}