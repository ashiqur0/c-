#include <bits/stdc++.h>
using namespace std;
// 1 1 1 1
//   2 2 2
//     3 3
//       4
int main() {

    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<i; j++) {
            cout << "  ";
        }
        for(int j=n; j>=i; j--) {
            cout << i << " ";
        }
        cout << endl;
    }

  return 0;
}