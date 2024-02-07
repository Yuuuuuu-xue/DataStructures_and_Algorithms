#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string frequencySort(string s) {
    unordered_map<char, int> charToFreq;

    for (char c : s) {
      if (charToFreq.find(c) == charToFreq.end()) {
        charToFreq[c] = 1;
      } else {
        charToFreq[c] ++;
      }
    }

    int maxFreq = 0;
    unordered_map<int, vector<char>> freqToChars;
    for (auto& p : charToFreq) {
      if (freqToChars.find(p.second) == freqToChars.end()) {
        freqToChars[p.second] = { p.first };
      } else {
        freqToChars[p.second].push_back(p.first);
      }
      maxFreq = max(maxFreq, p.second);
    }

    string o;
    for (int i = maxFreq; i >= 0; i--) {
      if (freqToChars.find(i) != freqToChars.end()) {
        for (char c : freqToChars[i]) {
          o += string(i, c);
        }
      }
    }
    return o;
  }
};