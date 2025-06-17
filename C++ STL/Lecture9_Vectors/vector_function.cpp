/*
vector : Vector Functions
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums;

    // Funtions 1: size() -> used to get the size of the vector
    cout << nums.size() << endl; // output : 0 (current size of nums vector)

    // Function 2: push_back() 
    nums.push_back(1000);        // insert 1000 at the end of nums
    nums.push_back(2000);
    nums.push_back(3000);

    cout << nums[0] << endl;     // output : 1000 (value at index 0)
    cout << nums.size() << endl; // output : 3 (current size of nums vector after inserting 3 value to it)

    // Function 3: pop_back()
    nums.pop_back();             // remove the last value of the array

    // Function 4: front()       // access first element of the vector
    cout << nums.front() << endl;

    // Function 5: back()        // access last element of the vector
    cout << nums.back() << endl;
    
    // Function 6: at()          // access vector element through index. similar as []
    cout << nums.at(0) << endl;  // output : 1000
    cout << nums[0] << endl;     // output : 1000

  return 0;
}