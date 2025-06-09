// Binary To Decimal
#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n) {
    int ans = 0, ex = 1;
    while(n) {
        ans +=  n % 10 * ex;
        n /= 10;
        ex *= 2;
    }
    return ans;
}

int main() {
    
    cout << BinaryToDecimal(101) << endl;   // 5

  return 0;
}