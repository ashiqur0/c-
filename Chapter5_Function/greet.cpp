// Greet: Greet a person by their name

#include <bits/stdc++.h>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << endl;
}

int main() {

  string name;
  cin >> name;
  greet(name);

  return 0;
}