#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
      int mid = (left + right) / 2;
      // cout << left << " " << mid << " " << right << "\n";
      if (nums[mid] == target) {
        return true;
      } else if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
        left ++;
        right --;
      } else if (target < nums[mid]) {
        // search left side
        // left side is sorted and target is in the left side
        // right side is sorted and target is not in the right side
        if ((nums[left] < nums[mid] && target >= nums[left]) || nums[mid] < nums[right] || (nums[left] > nums[mid] && target <= nums[left])) {
          right = mid - 1; 
        } else {
          left = mid + 1;
        }
      } else {
        // target > nums[mid]
        
        // search right side
        // left side is sorted and target is not in the left side
        // right side is sorted and target is in the right side
        if (nums[left] < nums[mid] || (nums[mid] < nums[right] && target <= nums[right]) || (nums[mid] > nums[right] && target >= nums[right])) {
          left = mid + 1;
        } else {
          right = mid - 1;
        }
      }
    }
    // cout << left << " " << right << "\n";
    return false;
  }
};