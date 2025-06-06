#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
    if(a < b) {
        return a;
    }
    return b;
}

int main() {

    int x = 5, y = 10;
    cout << min(x, y) << endl;
    
  return 0;
}