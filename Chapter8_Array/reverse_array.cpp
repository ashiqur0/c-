// Array : Reverse array [Two Pointer Approach]

#include <bits/stdc++.h>
using namespace std;

void rerverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    rerverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }

    cout << endl;

  return 0;
}