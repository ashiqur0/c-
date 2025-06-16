// Array : Find largest valued index

#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int largestIndex = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(nums[i] > largestIndex) {
            largestIndex = i;
        }
    }

    cout << largestIndex << endl;

  return 0;
}