#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int o = 0;
    int i = 0;
    int j = nums.size() - 1;
    while (i < j) {
      o = max(o, nums[i] + nums[j]);
      i ++;
      j --;
    }
    return o;
  }
};