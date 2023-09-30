#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool find132pattern(vector<int>& nums) {
    int currK = INT_MIN;
    vector<int> s;

    for (int i = nums.size() - 1; i >= 0; i--) {
      if (nums[i] < currK) {
        return true;
      }

      while (s.size() > 0 && s.back() < nums[i]) {
        currK = max(currK, s.back());
        s.pop_back();
      }

      s.push_back(nums[i]);
    }
    return false;
  }
};