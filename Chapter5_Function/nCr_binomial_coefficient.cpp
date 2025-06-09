// Calculate The nCr Binomial Coefficient
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {

    cout << nCr(8, 2) << endl;  // 28
    cout << nCr(6, 3) << endl;  // 20

  return 0;
}