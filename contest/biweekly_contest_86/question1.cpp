#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool findSubarrays(vector<int>& nums) {
    unordered_set<int> s;
    for (int i = 0; i < nums.size() - 1; i++) {
      int sum = nums[i] + nums[i + 1];
      if (s.find(sum) != s.end()) return true;
      s.insert(sum);
    }
    return false;
  }
};