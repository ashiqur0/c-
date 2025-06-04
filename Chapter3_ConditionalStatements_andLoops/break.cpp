// sum of odd till n
// learning: continue keyword
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n = 9, sum = 0;
    for(int i=1; i<=n; i++) {
        if(i%2==0) {
            continue;
        }
        sum += i;
    }

    cout << sum << endl;

  return 0;
} 