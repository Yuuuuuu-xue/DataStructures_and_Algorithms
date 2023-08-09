#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void solve(vector<int>& nums, int i, vector<vector<int>>& subsets) {
    // Base case, last item
    if (i == nums.size() - 1) {
      subsets.push_back({});
      subsets.push_back({nums[i]});
    } else {
      solve(nums, i + 1, subsets);
      // Constructing new subsets based on previous subsets
      int currSubsetSize = subsets.size();
      for (int j = 0; j < currSubsetSize; j++) {
        vector<int> subset = subsets[j];
        subset.push_back(nums[i]);
        subsets.push_back(subset);
      }
    }
  }

  vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> o;
    solve(nums, 0, o);
    return o;
  }
};