#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct PairHash {
    template <class T1, class T2>
    size_t operator() (const pair<T1, T2>& p) const {
      auto h1 = hash<T1>{}(p.first);
      auto h2 = hash<T2>{}(p.second);
      return h1 ^ (h2 << 1);
    }
  };

  bool dfs(unordered_set<int>& stonesSet, int lastPos, int curr, int k, unordered_set<pair<int, int>, PairHash>& seen) {
    if (curr == lastPos) {
      return true;
    }

    // Visited, then its false
    pair<int, int> p = make_pair(curr, k);
    if (seen.find(p) != seen.end()) {
      return false;
    }

    // Neighbors
    vector<int> neighbors = { k - 1, k, k + 1 };
    for (int neighbor : neighbors) {
      // Valid position
      if (neighbor >= 1 && stonesSet.find(curr + neighbor) != stonesSet.end() && dfs(stonesSet, lastPos, curr + neighbor, neighbor, seen)) {
        return true;
      }
      seen.insert(make_pair(curr + neighbor, neighbor));
    }
    return false;
  }

  bool canCross(vector<int>& stones) {
    unordered_set<int> stonesSet(stones.begin(), stones.end());
    unordered_set<pair<int, int>, PairHash> seen;
    return dfs(stonesSet, stones.back(), 0, 0, seen);
  }
};