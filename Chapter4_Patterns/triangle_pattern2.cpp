#include <bits/stdc++.h>
using namespace std;
// 1
// 1 2
// 1 2 3
// 1 2 3 4
int main() {

    int n=4; 
    for(int i=0; i<n; i++) {
        int count = 1;
        for(int j=0; j<=i; j++) {
            cout<< count++ << " ";
        }
        cout << endl;
    }

  return 0;
}