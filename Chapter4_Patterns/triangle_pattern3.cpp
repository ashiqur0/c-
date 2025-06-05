#include <bits/stdc++.h>
using namespace std;
// 1
// 2 2
// 3 3 3
// 4 4 4 4
int main() {

    int n=4; 
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

  return 0;
}