// Array : HW-3 Print all the unique value of an array

#include <bits/stdc++.h>
using namespace std;

void print_unique(int arr[], int size_arr, bool unique[]) {
    for (int i = 0; i < size_arr; i++) {
        if (unique[arr[i]]) {
            cout << arr[i] << " ";
            unique[arr[i]] = false;
        }
    }
    cout << endl;
}

int main() {

    int arr[] = {1, 2, 2, 4, 1, 6};
    int size_arr = 6;   

    bool unique[1000];
    fill_n(unique, 1000, true);

    print_unique(arr, size_arr, unique); // output : 1 2 4 6

  return 0;
}