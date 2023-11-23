#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool> o;
    for (int i = 0; i < l.size(); i++) {
      vector<int> subNums(nums.begin() + l[i], nums.begin() + r[i] + 1);
      sort(subNums.begin(), subNums.end());

      for (int i = 2; i < subNums.size(); i++) {
        if (subNums[1] - subNums[0] != subNums[i] - subNums[i - 1]) {
          o.push_back(false);
          break;
        }
      }
      if (o.size() == i) {
        o.push_back(true);
      }
    }
    return o;
  }
};
