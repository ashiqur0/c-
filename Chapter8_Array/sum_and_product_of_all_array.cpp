// Array : HW-1 Sum and Procuct of all

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int product(int arr[], int size) {
    int product = 1;
    for(int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;    

    cout << "Sum of all: " << sum(arr, size) << endl;
    cout << "Product of all: " << product(arr, size) << endl;

  return 0;
}