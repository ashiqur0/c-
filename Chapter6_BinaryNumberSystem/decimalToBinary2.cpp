// Decimal to Binary Way 2
#include <bits/stdc++.h>
using namespace std;

int toBinary(int n) {
    vector<int> v = {128, 64, 32, 16, 8, 4, 2, 1};

    string ans;
    for (int i = 0; i < v.size(); i++) {
        if (n >= v[i]) {
            n -= v[i];
            ans += '1';
        } else {
            ans += '0';
        }
    }

    return stoi(ans);
}

int main() {

    cout << toBinary(25) << endl;

  return 0;
}