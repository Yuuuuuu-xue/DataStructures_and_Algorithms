#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  unordered_map<int, vector<vector<int>>> cache;

public:
  vector<vector<int>> getFactors(int n, int min=2) {
    // Already have the cache value
    if (cache.find(n) != cache.end()) return cache[n];
    vector<vector<int>> o;
    for (int i = min; i <= n / 2; i ++) {
      // If it is a valid divider
      if (n % i == 0 && n / i >= min && n / i >= i) {
        o.push_back({i, n / i});
        // Recursively find the solutions for n / i
        for (vector<int>& item : getFactors(n / i, i)) {
          vector<int> newSolution = {i};
          newSolution.insert(newSolution.end(), item.begin(), item.end());
          o.push_back(newSolution);
        }
      }
    }
    return o;
  }
};