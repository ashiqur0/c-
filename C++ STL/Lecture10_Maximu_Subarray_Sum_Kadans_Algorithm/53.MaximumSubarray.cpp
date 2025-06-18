/*
LeetCode : 53. Maximum Subarray
Learnings : Kadane's Algorithm
Concept : 
          (small +ve) + (big -ve) = -ve
          (small -ve) + (big +ve) = +ve
          (small +ve) + (big +ve) = +ve
          (small -ve) + (big -ve) = -ve
*/

#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int max_sum = INT_MIN, current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        // Kadane's Algorithm
        current_sum += nums[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0) current_sum = 0;
    }
    return max_sum;
}
int main() {

  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  cout << maxSubArray(nums) << endl;

  return 0;
}