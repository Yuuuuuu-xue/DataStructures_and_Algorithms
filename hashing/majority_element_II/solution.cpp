#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int, int> m;
    for (int num : nums) {
      if (m.find(num) == m.end()) {
        m[num] = 1;
      } else {
        m[num] ++;
      }
    }

    vector<int> o;
    int t = nums.size() / 3;
    for (auto& p : m) {
      if (p.second > t) {
        o.push_back(p.first);
      }
    }
    return o;
  }
};