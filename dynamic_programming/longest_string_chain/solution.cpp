#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int longestStrChain(vector<string>& words) {
    sort(words.begin(), words.end(), [](const string& s1, const string& s2) {
      return s1.length() < s2.length();
    });

    unordered_map<string, int> dp;

    for (string& word : words) {
      dp[word] = 1;
      for (int i = 0; i < word.length(); i++) {
        string newWord = word.substr(0, i) + word.substr(i + 1);
        if (dp.find(newWord) != dp.end()) {
          dp[word] = max(dp[word], 1 + dp[newWord]);
        }
      }
    }

    int o = 0;
    for (auto& p : dp) {
      o = max(o, p.second);
    }
    return o;
  }
};