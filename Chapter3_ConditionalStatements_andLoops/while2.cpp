// sum of first 5 numbers using while loop
#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum = 0;
    int i=1;
    while(i <= 5) {
        sum += i++;
    }
    cout << sum << endl;

  return 0;
}