// Pass By Reference
#include <bits/stdc++.h>
using namespace std;

int changeX(int &x) {
    return x += 20;
}

int main() {

    int x = 5;
    cout << "Function Call x value: " << changeX(x) << endl;
    cout << "main Function x value: " << x << endl; // main function value changed

  return 0;
}