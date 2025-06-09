// Write A Function to Print all The Prime Numbers Till N
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void printPrimeNumbers(int n) {
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {

    printPrimeNumbers(20);

  return 0;
}