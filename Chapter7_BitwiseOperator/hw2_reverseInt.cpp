/*
HW2: Write a function to reverse an integer
*/

#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {

    int n = 123;
    cout << reverse(n) << endl;

  return 0;
}