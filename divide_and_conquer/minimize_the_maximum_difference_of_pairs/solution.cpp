#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimizeMax(vector<int>& nums, int p) {
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.back() - nums.front();
    while(left < right) {
      int mid = (left + right) / 2;
      // Check if we can find p pairs with absolute difference <= mid
      int i = 0;
      int pairs = 0;
      while (i < nums.size() - 1 && pairs < p) {
        if (abs(nums[i] - nums[i + 1]) <= mid) {
          pairs ++;
          i += 2;
        } else {
          i ++;
        }
      }

      // Find p pairs, then search left side otherwise right
      if (pairs >= p) {
        right = mid;
      } else {
        left = mid + 1;
      }
    }

    return right;
  }
};