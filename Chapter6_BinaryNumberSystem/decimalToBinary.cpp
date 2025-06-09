// convert a number from Decimal to Binary (2 to 8)

#include <bits/stdc++.h>
using namespace std;

int toBinary(int n) {
    int ans=0, ex=1;
    while(n) {
        ans += n % 2 * ex;
        n /= 2;
        ex *= 10;
    }
    return ans;
}

int main() {

    int n = 8;
    for(int i = 2; i <= 8; i++) {
        cout << toBinary(i) << endl;
    }

  return 0;
}