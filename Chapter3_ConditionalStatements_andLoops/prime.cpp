#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=3;
    // int n=5;
    bool isPrime = true;
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime? "prime\n" : "non-prime\n");

  return 0;
}