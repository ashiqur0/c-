#include <bits/stdc++.h>
using namespace std;
int main() {

    int n = 10, i=3, sum = 0;
    while(i<=n) {
        sum += i;
        i+=3;
    }

    cout << sum << endl;

  return 0;
}