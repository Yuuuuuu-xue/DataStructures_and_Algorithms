#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> o;

    for (int i = 0; i < nums.size() - 2; i++) {
      if (nums[i] > 0) break;

      int j = i + 1;
      int k = nums.size() - 1;
      while (j < k) {
        if (nums[j] + nums[k] < -nums[i]) {
          j++;
        } else if (nums[j] + nums[k] > -nums[i]) {
          k--;
        } else {
          vector<int> t = { nums[i], nums[j++], nums[k--] };
          o.push_back(t);
          // Avoid duplicate
          while (j < k && nums[j] == t[1]) j++;
          while (j < k && nums[k] == t[2]) k--;
        }
      }
      // Duplicate nums[i]
      while (i + 1 < nums.size() - 2 && nums[i] == nums[i + 1]) i++;
    }
    return o;
  }
};