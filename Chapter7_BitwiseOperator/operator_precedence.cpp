/*
Operator: Operator Precedence and Associativity

Associativity           Precedence
Right to Left           !, ~, ++, --
Left ot Right           *, /, %
Left ot Right           +, -
Left ot Right           <, <=, >=, >
Left ot Right           ==, !=
Left ot Right           &&
Left ot Right           ||
Right to Left           =
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    cout << 5 - 2 * 3 << endl;  // -1   
    cout << (5 - 2) * 3 << endl;  // 9

  return 0;
}