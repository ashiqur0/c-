// Convert a Letter From Lower-case to Upper-case
#include <bits/stdc++.h>
using namespace std;

char toUpper(char ch) {
    return ch -= 32;
}

int main() {

    char ch = 'a';
    // char ch;
    // cin >> ch;

    cout << toUpper(ch) << endl;

  return 0;
}