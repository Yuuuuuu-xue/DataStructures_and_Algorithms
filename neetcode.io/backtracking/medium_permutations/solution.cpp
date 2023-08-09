#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void solve(vector<int>& nums, int i, vector<vector<int>>& permutations) {
    // cout << nums.size() << " " << i << "\n";
    if (i >= nums.size()) {
      permutations.push_back(nums);
    }

    int currValue = nums[i];

    for (int j = i; j < nums.size(); j++) {
      // Swap
      nums[i] = nums[j];
      nums[j] = currValue;
    
      // If j < i, then we swap and resuling in a new permutation
      // If j == i, we do not want to swap index i, so we want to move to the next index
      
      solve(nums, i + 1, permutations);

      // Backtrack
      nums[j] = nums[i];
      nums[i] = currValue;
    }
  }
  
  vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> permutations;
    solve(nums, 0, permutations);
    return permutations;
  }
};