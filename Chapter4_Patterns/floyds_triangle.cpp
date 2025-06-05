#include <bits/stdc++.h>
using namespace std;
// 1
// 2 3
// 4 5 6
// 7 8 9 10
int main() {

    int n=4, count = 1;
    for(int i=1; i<=n; i++) {
        for(int j=i; j>=1; j--) {
            cout << count++ << " ";
        }
        cout << endl;
    }

  return 0; 
}