#include <bits/stdc++.h>
using namespace std;
int main() {

    int n=15, a = 3, b = 5;

    if(n % a == 0){
        if(n % b == 0) {
            cout << n << " is divisible by " << a << " and " << b << endl;
        } else {
            cout << n << " is only divisible by " << a << endl;
        }
    } else {
        cout << n << " is not divisible by " << a << endl;
    }

  return 0;
}