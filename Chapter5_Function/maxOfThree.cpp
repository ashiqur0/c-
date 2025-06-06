#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c) {
    if(a > b) {
        if(a > c) {
            return a;
        } else {
            return c;
        }
    } else {
        if(b > c) {
            return b;
        } else {
            return c;
        }
    }
}

int main() {

    int x = 5, y = 10, z = 20;
    cout << max(x, y, z) << endl;
    
  return 0;
}