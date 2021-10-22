#include <iostream>
using namespace std;
int main ()
{
int numbers[9];
int * p;
p = numbers;
*p = 2;
*(p+2) = 4;
p++;
*p = 1;
p = &numbers[6];
*(p++) = 8;
p = p - 3;
*p = 6;
*(--p) = 3;
p = numbers + 7;
*(p--) = 7;
*(--p) = 5;
numbers[8] = 0;
for (int n=0; n<9; n++)
cout << numbers[n] << endl;
return 0;
}