#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int reductionOperations(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int o = 0;
    int c = 0;
    
    int i = nums.size() - 1;
    while (i > 0) {
      int x = nums[i];
      while (i >= 0 && nums[i] == x) {
        c++;
        i--;
      }
      // Still has some smaller element
      if (i >= 0) {
        o += c;
      }
    }
    return o;
  }
};