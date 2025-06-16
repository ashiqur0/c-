// Array : HW-2 Swap max - min of an array

#include <bits/stdc++.h>
using namespace std;

void swap_max_min(int arr[], int size) {
    int min_arr = INT_MAX, max_arr = INT_MIN;
    int min_index = -1, max_index = -1;
    for(int i = 0; i < size; i++) {
        if (arr[i] < min_arr) {
            min_arr = arr[i];
            min_index = i;
        }        
    }
    for(int i = 0; i < size; i++) {
        if (arr[i] > max_arr) {
            max_arr = arr[i];
            max_index = i;
        } 
    }
    swap(arr[min_index], arr[max_index]);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;    

    swap_max_min(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // output : 6 2 3 4 5 1
    }
    cout << endl;

  return 0;
}