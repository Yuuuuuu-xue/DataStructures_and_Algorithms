#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
      if ((nums[i] ^ nums[i + 1]) == 0) {
        return nums[i];
      }
    }
    return -1;
  }
};