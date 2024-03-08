#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    for (int num : nums) {
      if (freq.find(num) == 0) {
        freq[num] = 1;
      } else {
        freq[num] ++;
      }
      maxFreq = max(maxFreq, freq[num]);
    }

    int o = 0;
    for (auto& p : freq) {
      if (p.second == maxFreq) {
        o += p.second;
      }
    }

    return o;
  }
};
