#include <bits/stdc++.h>
using namespace std;
// A A A A
//   B B B
//     C C
//       D
int main() {

    int n = 4;
    char ch = 65;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<i; j++) {
            cout << "  " ;
        }
        for(int j=n; j>=i; j--) {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }

  return 0;
}