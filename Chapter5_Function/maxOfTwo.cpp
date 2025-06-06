#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    return b;
}

int main() {

    int x = 5, y = 10;
    cout << max(x, y) << endl;
    
  return 0;
}