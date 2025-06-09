// Write a Function to Print nth Fibonacci
#include <bits/stdc++.h>
using namespace std;

long long F(int n) {
    if(n == 1  || n == 2) return 1;
    return F(n -1) + F(n - 2);
}

int main() {

    cout << F(6) << endl; // 8

  return 0;
}