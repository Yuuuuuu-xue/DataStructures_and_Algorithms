#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    unordered_map<int, int> m;
    for (int num : nums) m[num] = 1;
    int o = 0;

    for (int num : nums) {
      if (m.find(num) != m.end()) {
        int currConse = m[num];
        int curr = num + 1;
        while (m.find(curr) != m.end()) {
          currConse += m[curr];
          m.erase(curr++);
        }
        m[num] = currConse;
        o = max(o, currConse);
      }
    }
    return o;
  }
};
