#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
      int mid = (left + right) / 2;
      if (nums[mid] == target) {
        return mid;
      } else if (nums[left] <= nums[mid]) {
        // Left is sorted
        if (nums[left] <= target && target < nums[mid]) right = mid - 1;
        else left = mid + 1;
      } else {
        // Right is sorted
        if (nums[right] >= target && target > nums[mid]) left = mid + 1;
        else right = mid - 1;
      }
    }
    return -1;
  }
};