// Find the number
// Learnigns: break keyword
#include <bits/stdc++.h>
using namespace std;
int main() {

    int key = 5;
    int n = 10;
    for(int i=0; i<n; i++) {
        if(key == i) {
            cout << key << " Found\n";
            break;
        }
        cout << key << " not = " << i << endl;
    }

  return 0;
}