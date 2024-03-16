#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int findMaxLength(vector<int>& nums) {
    unordered_map<int, int> m;
    int currSum = 0;
    int o = 0;

    for (int i = 0; i < nums.size(); i++) {
      currSum += nums[i] == 0 ? -1 : 1;
      if (currSum == 0) {
        o = i + 1;
      } else if (m.find(currSum) != m.end()) {
        o = max(o, i - m[currSum] + 1);
      } else {
        m[currSum] = i;
      }
    } 

    return o;
  }
};