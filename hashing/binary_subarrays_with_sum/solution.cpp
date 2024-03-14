#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numSubarraysWithSum(vector<int>& nums, int goal) {
    unordered_map<int, int> m;
    int currSum = 0;
    int o = 0;

    m[0] = 1;

    for (int num : nums) {
      currSum += num;

      if (m.find(currSum - goal) != m.end()) {
        o += m[currSum - goal];
      } 

      if (m.find(currSum) == m.end()) {
        m[currSum] = 1;
      } else {
        m[currSum] ++;
      }
    }

    return o;
  }
};