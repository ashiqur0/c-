/*
Sope: Local Scope and Global Scope

Local variable: That are declared and access in only if-else block, function, loop or block of code etc.

Global variable: That are declared and access globally. They can also access from any block of code.
*/

#include <bits/stdc++.h>
using namespace std;

int x = 5;              // global variable

void display() {
    int x = 3;          // local variable
    cout << x << endl;
}

int main() {

    display();          // 3
    cout << x << endl;  // 5

  return 0;
}