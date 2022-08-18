#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int splitArray(vector<int>& nums, int m) {
    int s = accumulate(nums.begin(), nums.end(), 0);
    int left = 0;
    int right = s;
    while (left <= right) {
      int mid = (left + right) / 2;
      // Split the group
      int currSum = 0;
      int numGroup = 1;
      for (int num: nums) {
        // Not possible to split the groups
        if (num > mid) {
          numGroup = m + 1;
          break;
        }
        if (currSum + num > mid) {
          currSum = num;
          numGroup++;
        } else {
          currSum += num; 
        }
      }
      // cout << mid << " " << numGroup << "\n";

      // If group is exactly m
      if (numGroup == m) {
        // Otherwise all values < mid, then we will try a smaller value
        right = mid - 1;
      } else if (numGroup < m) {
        // guess a value is too high, need to try a lower value
        right = mid - 1;
      } else {
        // guess a value is too low, need to try a higher value
        left = mid + 1;
      }
    }
    return left;
  }
};