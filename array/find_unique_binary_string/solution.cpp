#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string findDifferentBinaryString(vector<string>& nums) {
    unordered_set<string> s(nums.begin(), nums.end());
    int n = nums[0].size();
    int i = 0;
    for (;;) {
      int x = i;
      string numInBinary = "";
      for (int j = 0; j < n; j++) {
        numInBinary.push_back('0' + (x & 1));
        x >>= 1;
      }
      numInBinary.reserve();

      if (s.find(numInBinary) == s.end()) {
        return numInBinary;
      }
      i ++;
    }
    return "";
  }
};