// Calculate The Factorial of N
#include <bits/stdc++.h>
using namespace std;
long long factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {

    cout << factorial(5) << endl;

  return 0;
}