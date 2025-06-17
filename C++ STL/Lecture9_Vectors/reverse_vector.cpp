// Array : HW-2 Reverse vector using Pass by reference Function

#include <iostream>
#include <vector>
using namespace std;

void reverse_vector(vector<int>& vec) {
    for(int i = 0; i < vec.size() / 2; i++) {
        swap(vec[i], vec[vec.size() - 1 - i]);
    }
}

int main() {

    vector<int> vec = {2, 3, 4, 5, 6};
    reverse_vector(vec);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    cout << endl;

  return 0;
}