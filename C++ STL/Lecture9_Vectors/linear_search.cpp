// Vector : HW-1 Linear Search on vector

#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> vec, int target) {
    for(int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) return i;
    }
    return -1;
}

int main() {

    vector<int> vec = {2, 3, 4, 5, 6};
    int target = 4;
    if (linear_search(vec, target) != 1) {
        cout << target << " is found." << endl;
    }

  return 0;
}