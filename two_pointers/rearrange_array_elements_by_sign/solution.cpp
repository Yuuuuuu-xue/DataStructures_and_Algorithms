#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> o(n);
    int pos = 0;
    int neg = 1;
    for (int num : nums) {
      if (num > 0) {
        o[pos] = num;
        pos += 2;
      } else {
        o[neg] = num;
        neg += 2;
      }
    }
    return o;
  }
};
