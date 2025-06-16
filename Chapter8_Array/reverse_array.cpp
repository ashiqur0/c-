// Array : Reverse array

#include <bits/stdc++.h>
using namespace std;

int linearSsearch(int arr[], int target, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    
    cout << linearSsearch(arr, target, size) << endl;

  return 0;
}