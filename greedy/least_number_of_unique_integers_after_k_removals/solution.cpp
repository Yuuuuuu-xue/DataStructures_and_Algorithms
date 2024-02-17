#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    unordered_map<int, int> m;
    for (int num: arr) {
      if (m.find(num) == m.end()) {
        m[num] = 1;
      } else {
        m[num] ++;
      }
    }

    unordered_map<int, int> freq;
    for (auto&p : m) {
      if (freq.find(p.second) == freq.end()) {
        freq[p.second] = 1;
      } else {
        freq[p.second] ++;
      }
    }

    int o = 0;
    for (int f = 1; f <= arr.size(); f++) {
      if (freq.find(f) == freq.end()) {
        continue;
      }

      int numElementsToRemove = min(k / f, freq[f]);
      freq[f] -= numElementsToRemove;
      k -= numElementsToRemove * f;
      o += freq[f];
    }

    return o;
  }
};
