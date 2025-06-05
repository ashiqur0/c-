#include <bits/stdc++.h>
using namespace std;
// A
// B B
// C C C
// D D D D
int main() {

    int n=4;
    char ch = 65;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++){
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }

  return 0;
}