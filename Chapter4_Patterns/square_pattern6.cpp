#include <bits/stdc++.h>
using namespace std;
// A B C
// D E F
// G H I
int main() {

    int n = 3;
    char ch = 65;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }

  return 0;
}