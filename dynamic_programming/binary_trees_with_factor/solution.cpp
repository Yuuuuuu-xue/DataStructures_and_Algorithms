#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numFactoredBinaryTrees(vector<int>& arr) {
    int MOD = 1000000007;
    sort(arr.begin(), arr.end());
    unordered_map<int, unsigned long> dp;
    
    for (int i = 0; i < arr.size(); i++) {
      dp[arr[i]] = 1;
      // Loop over previous element
      for (int j = 0; j < i; j++) {
        if (arr[i] % arr[j] == 0 && dp.find(arr[i] / arr[j]) != dp.end()) { 
          dp[arr[i]] = (dp[arr[i]] + dp[arr[j]] * dp[arr[i] / arr[j]]) % MOD;
        }
      }
    }
    int o = 0;
    for (auto pair : dp) o = (o + pair.second) % MOD;
    return o;
  }
};