// Check a Character Vowel or Consonant
#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    if(
        ch == 'a' || ch == 'A' ||
        ch == 'e' || ch == 'E' || 
        ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' || 
        ch == 'u' || ch == 'U'
    ) return true;

    return false;
}
int main() {

    // char ch = 'd';
    char ch;
    cin >> ch;
    
    if(isVowel(ch)) {
        cout << ch << " is Vowel." << endl;
    } else {
        cout << ch << " is Consonant." << endl;
    }

  return 0;
}