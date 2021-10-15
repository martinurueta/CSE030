#include <iostream>
#include <string>
 
using namespace std;
 
int operation (int a[], int& b, int c){
    int r;
    r = *a - b;
    b = *(a+1) - 2;

    return (r);
}

int main (){
    int i[2], j = 2, k = 3;
    cin >> i[0];
    i[1] = i[0]++;
    // cout << i[1] << endl;
    // cout<< operation (i,j,k) + j - k << endl;
    cout << i[0] << endl;
    cout << i[1] << endl;
    return 0;
}