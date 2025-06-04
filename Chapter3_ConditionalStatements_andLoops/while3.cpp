#include <bits/stdc++.h>
using namespace std;
int main() {

    int sum = 0, n = 9, i = 1;
    while(i <= n) {
        if(i % 2 != 0) {
            sum += i;
        }
        i++;
    }

    cout << sum << endl;

  return 0;
}