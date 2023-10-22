#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maximumScore(vector<int>& nums, int k) {

    int n = nums.size();
    if (n == 1) {
      return nums[0];
    }

    int left = k;
    int right = k;
    int o = 0;

    int minValue = nums[k];
    // At least one possible update
    while (left > 0 || right < n - 1) {
      // Both left and right are valid
      if (left > 0 && right < n - 1) {
        if (nums[left - 1] < nums[right + 1]) {
          right ++;
        } else {
          left --;
        }
      } else if (left > 0) {
        left --;
      } else {
        right ++;
      }
      minValue = min(minValue, nums[left]);
      minValue = min(minValue, nums[right]);
      // cout << n << " " << minValue << " " << left << " " << right << " " << nums[left] << " " << nums[right] << "\n";
      o = max(o, (right - left + 1) * minValue);
    }

    return o;
  }
};