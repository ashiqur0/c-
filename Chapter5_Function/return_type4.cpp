#include <bits/stdc++.h>
using namespace std;
double div(double n1, double n2) {
    return n1 / n2;
}
int main() {

    double a = 10, b = 3;

    double division = div(a, b);
    cout << fixed << setprecision(2) << division << endl;

  return 0;
}