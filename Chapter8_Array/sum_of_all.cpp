// Array : Sum of all

#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[] = {5, 15, 22, 1, 15, 24};
    int size = 6;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += nums[i];
    }

    cout << sum << endl;

  return 0;
}