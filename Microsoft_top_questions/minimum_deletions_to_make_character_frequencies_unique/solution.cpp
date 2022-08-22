#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minDeletions(string s) {
    // Build the frequency map
    unordered_map<char, int> m;
    for (char c : s) m[c] ++;
    
    int maxFreq = 0;
    unordered_map<int, int> freq;
    for (auto p : m) {
      freq[p.second] ++;
      maxFreq = max(maxFreq, p.second);
    }

    // Find the actual solution
    int o = 0;
    int curr = maxFreq;
    while (curr > 0) {
      if (freq[curr] > 1) {
        // cout << o << " " << freq[curr] << " " << curr << "\n";
        int c = 0;
        for (int i = 1; i < freq[curr]; i++) {
          if (curr - i >= 0) c++;
          freq[curr - c] ++;
          o += c;
        }
      }
      curr --;
    }
    return o;
  }
};