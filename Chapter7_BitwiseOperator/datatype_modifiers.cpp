/*
Data Type Modifiers: to change the meaning of data types

long: let a variable to store >= 4 bytes value. Ex: long int x = 10^12
short: let a variable to store <= 2 byte value. Ex: short int x = 10^3
long long: let a variable to store 8 byte value. Ex: long long int x = 10^12
signed: sores both the negative and positive value. Ex. number = -1;
unsigned: sores only positive number. Ex. Emp_ID = 1001;
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    long int a = 5;
    short int b = 5;
    long long int c = 5;
    signed int d = 4;
    unsigned int e = 5;
    cout << sizeof(long) << endl;       // 4 to 8 (depends on platform)
    cout << sizeof(long long) << endl;  // 8
    cout << sizeof(short) << endl;      // 2
    cout << sizeof(signed) << endl;     // 4
    cout << sizeof(unsigned) << endl;   // 4

  return 0;
}