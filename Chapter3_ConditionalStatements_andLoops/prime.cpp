#include <bits/stdc++.h>
using namespace std;
int main() {
    // int n=4;
    int n=5;
    bool isPrime = true;
    for(int i=2; i<n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime? "prime\n" : "non-prime\n");

  return 0;
}