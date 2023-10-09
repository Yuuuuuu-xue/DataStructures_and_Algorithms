#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> searchRange(vector<int>& nums, int target) {
    if (nums.size() == 0) {
      return {-1, -1};
    }
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
      if (nums[left] == nums[right]) {
        if (nums[left] == target) {
          return {left, right};
        }
        return {-1, -1};
      }

      int mid = (left + right) / 2;
      if (nums[mid] > target) {
        right = mid - 1;
      } else if (nums[mid] < target) {
        left = mid + 1;
      } else {
        if (nums[left] < target) {
          left ++;
        } else {
          right --;
        }
      }
    }
    return {-1, -1};
  }
};