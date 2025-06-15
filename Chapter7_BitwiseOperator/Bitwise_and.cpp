/*
Bitwise Operator: Bitwise AND (&)
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1

Example 1: 4 & 8
4 = 0100
8 = 1000
&_______
    0000 = 0 in Decimal
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int a = 4, b = 8;
    cout << (a & b) << endl;

  return 0;
}