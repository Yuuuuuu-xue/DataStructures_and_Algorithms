#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> divideArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> o;

    for (int i = 0; i < nums.size() / 3; i++) {
      if (nums[i * 3 + 2] - nums[i * 3] > k) {
        return {};
      }
      o.push_back({ nums[i * 3], nums[i * 3 + 1], nums[i * 3 + 2] });
    }

    return o;
  }
};