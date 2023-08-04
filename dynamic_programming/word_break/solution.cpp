#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.length() + 1, false);
    // Base case
    dp[0] = true;
    for (int i = 1; i < s.length() + 1; i++) {
      string subS = s.substr(0, i);
      for (string word : wordDict) {
        // if (word.length() <= subS.length()) {
        //   cout << word << ", " << subS << ", " << subS.substr(subS.length() - word.length()) << ", " << dp[subS.length() - word.length()] << "\n";
        // }
        if (word.length() <= subS.length() && subS.substr(subS.length() - word.length()) == word && dp[subS.length() - word.length()]) {
          dp[i] = true;
        }
      }
    }
    return dp[s.length()];
  }
};