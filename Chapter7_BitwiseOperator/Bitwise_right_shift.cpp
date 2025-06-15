/*
Bitwise Operator: Bitwise Right Shif (<<)
100 >> 1 = 10
11 >> 1 = 1
100 >> 2 = 1
1010 >> 2 = 10

Example 1: 20 >> 2
20 = 10100 in Binary
10100 >> 2 = 101 = 5 in decimal
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int a = 4;
    cout << (a >> 3) << endl; // 0
    cout << (20 >> 2) << endl; // 5

  return 0;
}