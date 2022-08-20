#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  void dfs(string& s, vector<vector<string>>& o, vector<string>& curr, vector<vector<bool>>& dp, int i) {
    if (i >= s.size()) {
      // Reach to the end, append curr list to the tout put array
      o.push_back(curr);
    }
    for (int end = i; end < s.size(); end++) {
      // If s[i:end] is a palindrome
      if (s[i] == s[end] && (end - i <= 2 || dp[i + 1][end - 1])) {
        // update dp
        dp[i][end] = true;
        curr.push_back(s.substr(i, end - i + 1));
        dfs(s, o, curr, dp, end + 1);
        // backtrack
        curr.pop_back();
      }
    }
  }

public:
  vector<vector<string>> partition(string s) {
    vector<vector<string>> o;
    vector<vector<bool>> dp(s.size(), vector<bool>(s.size()));
    vector<string> curr;
    dfs(s, o, curr, dp, 0);
    return o;
  }
};