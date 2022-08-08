#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int lengthOfLIS(vector<int>& nums) {
    vector<int> lst;
    lst.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++) {
      if (lst.back() < nums[i]) {
        lst.push_back(nums[i]);
      } else {
        lst[lower_bound(lst.begin(), lst.end(), nums[i]) - lst.begin()] = nums[i];
      }
    }
    return lst.size();
  }
};