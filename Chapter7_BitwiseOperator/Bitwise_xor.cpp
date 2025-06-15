/*
Bitwise Operator: Bitwise XOR (^)
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0

Example 1: 4 ^ 8
4 = 0100
8 = 1000
&_______
    1100 = 12 in Decimal
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int a = 4, b = 8;
    cout << (a ^ b) << endl;

  return 0;
}