#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxProduct(vector<int>& nums) {
    int a = max(nums[0], nums[1]);
    int b = min(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); i++) {
      if (nums[i] > a) {
        b = a;
        a = nums[i];
      } else {
        b = max(b, nums[i]);
      }
    }
    return (a - 1) * (b - 1);
  }
};