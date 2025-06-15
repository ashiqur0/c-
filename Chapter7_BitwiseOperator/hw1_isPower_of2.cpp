/*
HW1: Check a number is power of 2 or not ?
*/

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo_method_1(int n) {
    if (n >= 1 && n <= 2) return true;
    int x = 2;
    while (x <= n) if ((x *= 2) == n) return true;
    return false;
}

bool isPowerOfTwo_method_2(int n) {
    if (n >= 1 && n <= 2) return true;
    int x = 2;
    while (x <= n) if ((x <<= 1) == n) return true;
    return false;
}

int main() {

    int n = 16;
    
    if (isPowerOfTwo_method_2(n)) cout << n << " is power of 2\n";
    else cout <<  n << " is not power of 2\n";

  return 0;
}