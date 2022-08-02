#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int missingElement(vector<int>& nums, int k) {
    int i = 0;
    int j = nums.size() - 1;
    while (i + 1 < j) {
      int mid = (i + j) / 2;
      if (nums[mid] - nums[i] - (mid - i) < k) {
        k -= nums[mid] - nums[i] - (mid - i);
        i = mid;
      } else {
        j = mid;
      }
    }
    if (nums[j] - nums[i] - 1 >= k) {
      return nums[i] + k;
    } else {
      return nums[j] + k - max(nums[j] - nums[i] - 1, 0);
    }
  }
};