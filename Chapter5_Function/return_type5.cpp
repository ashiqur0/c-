#include <bits/stdc++.h>
using namespace std;
#define lli long long int

lli fact(lli n) {
    // lli f = 1;
    // for(int i=1; i<=n; i++) {
    //     f *= i;
    // }
    // return f;
    if(n==0 || n==1) {
        return 1;
    }
    return n*fact(n-1);
}
int main() {

    lli a = 10;

    lli factorial = fact(a);
    cout << factorial << endl;

  return 0;
}