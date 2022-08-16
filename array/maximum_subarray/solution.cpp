#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int o = nums[0];
    int curr = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      if (curr + nums[i] >= nums[i]) {
        curr += nums[i];
      } else {
        curr = nums[i];
      }
      o = max(o, curr);
    }
    return o;
  }
};