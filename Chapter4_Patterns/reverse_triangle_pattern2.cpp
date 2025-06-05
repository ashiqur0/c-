#include <bits/stdc++.h>
using namespace std;
// A
// B A
// C B A
// D C B A
int main() {

    int n = 4;
    for(int i=1; i<=n; i++) {
        char ch = 65+i-1;
        for(int j=i; j>=1; j--) {
            cout << ch-- << " ";
        }
        cout << endl;
    } 

  return 0;
}