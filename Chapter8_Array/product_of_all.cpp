// Array : Product of all

#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[] = {2, 2, 2, 2, 2, 2, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    int product = 1;
    for(int i = 0; i < size; i++) {
        product *= nums[i];
    }

    cout << product << endl;

  return 0;
}