//void Type: does not return anything to calling function. Just perform the task.

#include <bits/stdc++.h>
using namespace std;
void printHello(int n) {
    for(int i=0; i<n; i++) {
      cout << "hello" << endl;
    }
}


int main() {

    int n = 5;
    printHello(n);

  return 0;
}