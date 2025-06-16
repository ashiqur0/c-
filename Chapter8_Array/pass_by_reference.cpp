// Array : Pass by reference (address / pointer)

#include <bits/stdc++.h>
using namespace std;

void changeArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // নতুন কোনো array তৈরী হয়না।
    }                // main array address এর উপর কাজ করা হয় 
}

int main() {

    int arr[] = {1, 2, 3};
    int size = 3;

    changeArray(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    // output : 2, 4, 6
    // array pass by referenc(send original address)

  return 0;
}