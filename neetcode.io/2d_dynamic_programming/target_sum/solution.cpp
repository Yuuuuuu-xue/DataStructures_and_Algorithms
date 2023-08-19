#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

  struct PairHash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ (h2 << 1);
    }
  };

  int solve(vector<int>& nums, int target, int i, unordered_map<pair<int, int>, int, PairHash>& m) {
    if (i >= nums.size()) {
      if (target == 0) {
        return 1;
      }
      return 0;
    }

    pair<int, int> key = make_pair(target, i);
    if (m.find(key) != m.end()) {
      return m[key];
    }

    int val = solve(nums, target + nums[i], i + 1, m) + solve(nums, target - nums[i], i + 1, m);
    m[key] = val;
    return val;
  }
  
  int findTargetSumWays(vector<int>& nums, int target) {
    unordered_map<pair<int, int>, int, PairHash> m;
    return solve(nums, target, 0, m);
  }
};

