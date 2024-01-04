#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minOperations(vector<int>& nums) {
    unordered_map<int, int> m;
    for (int num : nums) {
      if (m.find(num) == m.end()) {
        m[num] = 1;
      } else {
        m[num] ++;
      }
    }

    int o = 0;
    for (auto& p : m) {
      if (p.second == 1) {
        return -1;
      }

      if (p.second % 3 == 0) {
        o += p.second / 3;
      } else {
        o += p.second / 3 + 1;
      }
    }

    return o;
  }
};