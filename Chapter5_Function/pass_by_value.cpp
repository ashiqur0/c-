// Pass By Value
#include <bits/stdc++.h>
using namespace std;

int  fun(int x, int y) {
    x += 10;
    y += 10;
    return x + y;
}

int main() {

    int x = 5, y = 4;
    cout << fun(x, y) << endl;  // 29
    cout << x << " " << y << endl; // 5, 4 (does not change)

  return 0;
}