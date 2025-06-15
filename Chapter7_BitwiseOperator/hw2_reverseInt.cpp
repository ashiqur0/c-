/*
HW2: Write a function to reverse an integer
*/

#include <bits/stdc++.h>
using namespace std;

int reverse_method_1(int n) {
    int rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int reverse_method_2(int n) {
    int ans = 0;
    while(n) {
        int digit = n % 10;
        n /= 10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX && digit > 7)) return 0;
        if (ans < INT_MIN / 10 || (ans == INT_MIN && digit < -8)) return 0;
        ans = ans * 10 + digit;
    }
    return ans;
}

int main() {

    // int n = 123;    // 321
    int n = 1534236469;    // 0
    cout << reverse_method_2(n) << endl;

  return 0;
}