#include <bits/stdc++.h>
using namespace std;
// A
// B C
// D E F
// G H I J
int main() {

    int n = 4;
    char ch = 65;
    for(int i=1; i<=n; i++) {
        for(int j=i; j>=1; j--) {
            cout << ch++ << " ";
        }
        cout << endl;
    }

  return 0;
}