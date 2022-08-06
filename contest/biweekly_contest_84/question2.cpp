#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  long long countBadPairs(vector<int>& nums) {
    unordered_map<int, long long> m;
    long long total = 0;
    long long o = 0;
    for (long i = 0; i < nums.size(); i++) {
      o += total - nums[m[nums[i] - i]];
      m[nums[i] - i] ++;
      total ++;
    }
    return o;
  }
};