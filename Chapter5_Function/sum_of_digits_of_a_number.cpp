// Calculate The Sum of Digits of a Number
#include <bits/stdc++.h>
using namespace std;
int sumofdigits(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {

    cout << sumofdigits(145) << endl;

  return 0;
} 