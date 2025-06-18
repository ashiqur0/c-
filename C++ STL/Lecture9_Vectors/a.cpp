#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> vec = {1, 2, 3, 4, 5};
    // vec.erase(vec.begin() + 1, vec.begin() + 3);
    vec.push_back(6);
    vec.insert(vec.begin(), 100);

    // for (int i : vec) cout << i << " ";
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++) { 
      cout << *(it) << " ";
    }

  return 0;
}