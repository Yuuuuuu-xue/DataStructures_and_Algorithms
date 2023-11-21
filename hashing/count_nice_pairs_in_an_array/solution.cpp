#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int revert(int num) {
    string num_string = to_string(num);
    reverse(num_string.begin(), num_string.end());
    return stoi(num_string);
  }
  
  int countNicePairs(vector<int>& nums) {
    unordered_map<int, long long> freq;
    for (int num : nums) {
      int revNum = revert(num);
      int k = num - revNum;
      if (freq.find(k) == freq.end()) {
        freq[k] = 1;
      } else {
        freq[k] ++;
      }
    }

    int mod = 1e9 + 7;
    long long o = 0;
    for (auto& p : freq) {
      // cout << p.second << "\n";
      if (p.second >= 2) {
        o = (o + (p.second * (p.second - 1) / 2)) % mod;
      }
    }
    return (int)o;
  }
};