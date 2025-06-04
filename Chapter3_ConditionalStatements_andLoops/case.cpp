// Qs: Find the character is upper case or lower case
#include <bits/stdc++.h>
using namespace std;
int main() {

    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Upper case\n";
    } else if (ch >= 'a' && ch <= 'z'){
        cout << "Lower case\n";
    } else {
        cout << "Not a lette\n";
    }

  return 0;
}