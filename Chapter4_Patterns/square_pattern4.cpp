#include <bits/stdc++.h>
using namespace std;
// A B C D
// A B C D
// A B C D
// A B C D
int main() {

    int n=4;
    for(int i=1; i<=n; i++) {
        char ch = 65;
        for(int j=1; j<=n; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }

  return 0;
}