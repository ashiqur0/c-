#include <bits/stdc++.h>
using namespace std;
int main() {

    int n = 5;
    for(int i=0; i<n; i++) {
        cout << "*";
        for(int j=0; j<n-1; j++) {
            cout << " *";
        }
        cout << endl;
    }

  return 0;
}