#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {

    // Sorting Algorithm:
    // Sort Ascending order
    vector<int> nums = {5, 4, 8, 6, 3, 9, 2, 7, 0, 1};
    sort(nums.begin(), nums.end());
    for(int num : nums) {
        cout << num << endl;
    }

    // Sort Descending order
    sort(nums.rbegin(), nums.rend());
    for(int num : nums) {
        cout << num << endl;
    }

    // Searching Algorithms
    // Find specific element
    int item = 5;
    auto it = find(nums.begin(), nums.end(), item);

    if(it != nums.end()) {
        cout << item << " was found" << endl;
    } else {
        cout << item << " was not found" << endl;
    }

    // Find smallest element: min_element()
    auto it2 = min_element(nums.begin(), nums.end());
    cout << *it2 << endl;

    // Find largest element: max_element()
    auto it3 = max_element(nums.begin(), nums.end());
    cout << *it3 << endl;

    // Modify Algorithm
    // copy a vector elements to another vector
    vector<int> n(10);
    copy(nums.begin(), nums.end(), n.begin());
    for(int i=0; i<n.size(); i++) {
        cout << n[i] << endl;
    }

    return 0;
}