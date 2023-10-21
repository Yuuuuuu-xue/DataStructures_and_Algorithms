#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int constrainedSubsetSum(vector<int>& nums, int k) {
    deque<int> dq;
    for (int i = 0; i < nums.size(); i++) {
      if (!dq.empty()) {
        nums[i] += nums[dq.front()];
      }

      // Remove the max values no longer within the range
      while (!dq.empty() && i - dq.front() > k) {
        dq.pop_front();
      }

      // Remove the value < nums[i]
      while (!dq.empty() && nums[dq.back()] < nums[i]) {
        dq.pop_back();
      }

      if (nums[i] > 0) {
        dq.push_back(i);
      }
    }

    int o = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      o = max(o, nums[i]);
    }
    return o;
  }
};