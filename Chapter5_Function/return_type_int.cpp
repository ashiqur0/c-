//int Type: return an integer value to the calling function.
#include <bits/stdc++.h>
using namespace std;
int sum(int num1, int num2) {
    return num1 + num2;
}
int subtract(int num1, int num2) { 
    return num1 - num2;
}
int multiplication(int num1, int num2) { 
    return num1 * num2;
}
int division(int num1, int num2) { 
    return num1 / num2;
}
int modulo(int num1, int num2) { 
    return num1 % num2;
}

int main() {

    int num1 = 10, num2 = 5;
    cout << sum(num1, num2) << endl;
    cout << subtract(num1, num2) << endl;
    cout << multiplication(num1, num2) << endl;
    cout << division(num1, num2) << endl;
    cout << modulo(num1, num2) << endl;

  return 0;
}