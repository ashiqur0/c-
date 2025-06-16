/*
Array : HW-4 Print intersection of two array

Example : A = {3, 4, 1, 2}, B = {2, 3, 4, 5, 6}
          A ∩ B = {3, 4, 1, 2} ∩ {2, 3, 4, 5, 6}
                = {3, 4, 2}
*/

#include <bits/stdc++.h>
using namespace std;

bool isPresent(int B[], int size_B, int n){
    for (int i = 0; i < size_B; i++) {
        if (B[i] == n) {
            return true;
        }
    }
    return false;
}

void print_intersection(int A[], int size_A, int B[], int size_B) {
    for (int i = 0; i < size_A; i++) {
        if (isPresent(B, size_B, A[i])) {
            cout << A[i] << " ";
        }
    }
    cout << endl;
}

int main() {

    int A[] = {3, 4, 1, 2}, B[] = {2, 3, 4, 5, 6};
    int size_A = sizeof(A) / sizeof(A[0]);
    int size_B = sizeof(B) / sizeof(B[0]);

    print_intersection(A, size_A, B, size_B); // output : 3 4 2

  return 0;
}