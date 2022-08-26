#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int>& nums) {
    int o = 0;
    for (int num : nums) o ^= num;
    return o;
  }
};