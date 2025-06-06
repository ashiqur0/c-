#include <bits/stdc++.h>
using namespace std;

int min(int a, int b, int c) {
    if(a < b) {
        if(a < c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b < c) {
            return b;
        }
        return c;
    }
    return min(b, c);
}

int main() {

    int x = 50, y = 100, z=20;
    cout << min(x, y, z) << endl;
    
  return 0;
}