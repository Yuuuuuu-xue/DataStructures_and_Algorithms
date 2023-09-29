#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isMonotonic(vector<int>& nums) {
    int c = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
      if ((c < 0 && nums[i] > nums[i + 1]) || (c > 0 && nums[i] < nums[i + 1])) {
        return false;
      }
      if (c == 0 && nums[i] != nums[i + 1]) {
        c = nums[i] < nums[i + 1] ? -1 : 1;
      }
    }

    return true;
  }
};