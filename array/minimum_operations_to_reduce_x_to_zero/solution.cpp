#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minOperations(vector<int>& nums, int x) {
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
      total += nums[i];
    }

    if (total < x) {
      return -1;
    }

    if (total == x) {
      return nums.size();
    }

    // Sliding window
    int o = -1;
    int left = 0;
    int right = 0;
    int currSum = 0;
    while (right < nums.size()) {
      currSum += nums[right];
      right ++;

      // We want to keep the window = total - x
      while (currSum > total - x) {
        currSum -= nums[left];
        left ++;
      }

      // Now currSum <= total - x, if == total - x, then find a valid combination
      if (currSum == total - x) {
        o = max(o, right - left);
      }
    }

    return o == -1 ? -1 : nums.size() - o;
  }
};