#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=6, fact=1, i=1;
    while(i<=n){
        fact*=i;
        i++;
    }

    cout << fact << endl;

  return 0;
}