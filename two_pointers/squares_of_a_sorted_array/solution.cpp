#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> sortedSquares(vector<int>& nums) {
    int firstNonNegI = 0;
    while (firstNonNegI < nums.size() && nums[firstNonNegI] < 0) {
      firstNonNegI++;
    }

    vector<int> o;

    int j = firstNonNegI - 1;
    int i = firstNonNegI;

    while (j >= 0 && i < nums.size()) {
      if (abs(nums[j]) <= nums[i]) {
        o.push_back(nums[j] * nums[j]);
        j --;
      } else {
        o.push_back(nums[i] * nums[i]);
        i ++;
      }
    }

    while (j >= 0) {
      o.push_back(nums[j] * nums[j]);
      j --;
    }

    while (i < nums.size()) {
      o.push_back(nums[i] * nums[i]);
      i ++;
    }

    return o;
  }
};
