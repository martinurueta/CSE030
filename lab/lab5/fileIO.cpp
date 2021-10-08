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

    while(!file.eof()){
        file >> data;
        count ++;
    }
    file.close();

    file.open("words_in.txt");

    words = new string [count];
    for(int i = 0; i < count; i++){
        file >> words[i];
    }
    for(int i = 0; i < count; i++){
        cout << words[i]<<" ";
    }
    return 0;
}