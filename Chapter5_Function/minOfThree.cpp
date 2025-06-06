#include <bits/stdc++.h>
using namespace std;

int min(int a, int b, int c) {
    if(a < b) {
        return min(a, c);
    }
    return min(b, c);
}

int main() {

    int x = 5, y = 10, z=20;
    cout << min(x, y, z) << endl;
    
  return 0;
}