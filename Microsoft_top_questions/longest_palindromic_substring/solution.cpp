#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string longestPalindrome(string s) {
    vector<vector<bool>> dp(s.size(), vector<bool>(s.size()));
    // Base case
    for (int i = 0; i < s.size(); i++) dp[i][i] = true;

    int maxLeft = 0;
    int maxRight = 0;

    // Loop over each case, length of the substring
    for (int len = 2; len <= s.size(); len++) {
      for (int i = 0; i <= s.size() - len; i++) {
        int j = i + len - 1;
        dp[i][j] = s[i] == s[j] && (i + 1 > j - 1 || dp[i + 1][j - 1]);
        // If it is a palindrome
        if (dp[i][j] && j - i >= maxRight - maxLeft) {
          // Need to update the longest palindrome
          maxLeft = i;
          maxRight = j;
        }
      }
    }

    // Return the longest palindrome substring using maxLeft and maxRight
    return s.substr(maxLeft, maxRight - maxLeft + 1);
  }
};