// Calculate The Sum of N Natural Numbers
#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {

    cout << sum(5) << endl;
    cout << sum(10) << endl;

  return 0;
}