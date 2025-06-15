/*
Bitwise Operator: Bitwise Left Shif (<<)
0 << 1 = 00
1 << 1 = 10
1 << 2 = 100
101 << 2 = 10100

Formula: a >> b = a / 2^b

Example 1: 2 << 3
1 = 10 in Binary
1 << 3 = 1 << 3 = 1000 = 8 in decimal
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int a = 1;
    cout << (a << 3) << endl;
    cout << (5 << 2) << endl; // 20

  return 0;
}