#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int, int> m;
    int o = 0;
    for (int i = nums.size() - 1; i >= 0; i--) {
      if (m.find(nums[i]) == m.end()) {
        m[nums[i]] = 0;
      }
      o += m[nums[i]];
      m[nums[i]] = m[nums[i]] + 1;
    }
    return o;
  }
};