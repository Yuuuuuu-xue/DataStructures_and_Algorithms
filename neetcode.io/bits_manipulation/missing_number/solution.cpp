#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int missingNumber(vector<int>& nums) {
    int o = 0;
    for (int i = 0; i <= nums.size(); i++) {
      o ^= i;
    }
    for (int num : nums) {
      o ^= num;
    }
    return o;
  }
};