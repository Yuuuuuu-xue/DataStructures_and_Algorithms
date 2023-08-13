#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int robWithoutCircle(vector<int>& nums, int i, int j) {
    int robPrevHouse = nums[i];
    int notRobPrevHouse = 0;
    for (int k = i + 1; k < j; k++) {
      int prevNotRobPrevHouse = notRobPrevHouse;
      notRobPrevHouse = max(robPrevHouse, notRobPrevHouse);
      robPrevHouse = prevNotRobPrevHouse + nums[k];
    }
    return max(robPrevHouse, notRobPrevHouse);
  }

  int rob(vector<int>& nums) {
    if (nums.size() == 1) {
      return nums[0];
    }
    return max(robWithoutCircle(nums, 0, nums.size() - 1), robWithoutCircle(nums, 1, nums.size()));
  }
};
