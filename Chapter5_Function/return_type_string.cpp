// Reverse a string:
#include <bits/stdc++.h>
using namespace std;

string reverseString(string str) {

    // // way 1:
    // string ans;
    // for(int i=str.size()-1; i>=0; --i) {
    //     ans += str[i];
    // }
    // return ans;

    // // way2
    // int n = str.size();
    // for(int i=0; i<n/2; ++i) {
    //     swap(str[i], str[n-i-1]);
    // }
    // return str;

    // way3
    reverse(str.begin(), str.end());

    return str;
}

int main() {

    string str;
    cin >> str;
    // string str = "hello";
    cout << "Original String: " << str << endl;
    cout << "Reverse String: " << reverseString(str) << endl;

  return 0;
}