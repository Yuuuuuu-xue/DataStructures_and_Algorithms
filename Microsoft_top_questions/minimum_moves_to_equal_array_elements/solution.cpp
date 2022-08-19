#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minMoves(vector<int>& nums) {
    int minNum = *min_element(nums.begin(), nums.end());
    int o = 0;
    for (int num : nums) o += num - minNum;
    return o;
  }
};