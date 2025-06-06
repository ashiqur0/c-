// Find a character is Upper-case or Lower-case 
#include <bits/stdc++.h>
using namespace std;

bool isUpper(char ch) {
    if(ch >= 65 && ch <= 90) {
        return true;
    }

    return false;
}

int main() {

    // char ch = 'A';
    char ch;
    cin >> ch;

    if(isUpper(ch)) {
        cout << ch << " is upper-case character" << endl;
    } else {
        cout << ch << " is lower-case character" << endl;
    }

  return 0;
}