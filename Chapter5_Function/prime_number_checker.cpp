// Write a Function to Check a Number is Prime or Not
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {    
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false; 
    }

    return true;
}

int main() {

    cout << isPrime(2) << endl;

  return 0;
}