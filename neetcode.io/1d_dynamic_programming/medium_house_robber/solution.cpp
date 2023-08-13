#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int rob(vector<int>& nums) {
    int robPrevHouse = nums[0];
    int notRobPrevHouse = 0;
    for (int i = 1; i < nums.size(); i++) {
      int prevNotRobPrevHouse = notRobPrevHouse;
      notRobPrevHouse = max(robPrevHouse, notRobPrevHouse);
      robPrevHouse = prevNotRobPrevHouse + nums[i];
    }
    return max(robPrevHouse, notRobPrevHouse);
  }
};