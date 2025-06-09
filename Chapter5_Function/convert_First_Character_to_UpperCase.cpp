// First Character to Upper Case

#include <bits/stdc++.h>
using namespace std;
int main() {

    string name = "karim";
    char ch = name[0];
    if(ch > 90) {
        ch -= 32;
    }

    name[0] = ch;
    cout << name << endl;

  return 0;
}