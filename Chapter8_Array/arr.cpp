// Array:

#include <bits/stdc++.h>
using namespace std;

int main() {

    // creation
    int marks[] = {87, 90, 98, 99, 96, 97, 89};
    double cgpa[] = {3.99, 3.50, 3.15, 4.50, 3.78};

    // access 
    cout << marks[0] << endl;

    // access through loop
    int size = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }

    // input thrugh loop
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }

  return 0;
}