#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int findLongestChain(vector<vector<int>>& pairs) {
    auto compare  = [](const vector<int>& p1, const vector<int>& p2) {
      if (p1[1] < p2[1]) {
        return true;
      } else if (p1[1] == p2[1]) {
        return p1[0] < p2[0];
      }
      return false;
    };
    sort(pairs.begin(), pairs.end(), compare);

    int longestChainLength = 1;
    int currLast = pairs[0][1];
    for (int i = 1; i < pairs.size(); i++) {
      if (pairs[i][0] > currLast) {
        longestChainLength ++;
        currLast = pairs[i][1];
      }
    }

    return longestChainLength;
  }
};