#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int longestOnes(vector<int>& nums, int k) {
    queue<int> q;
    int i = 0;
    int o = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] == 0) {
        if (k > 0) {
          q.push(j);
          k--;
        } else if (!q.empty()) {
          o = max(o, j - i);
          int c = q.front();
          q.pop();
          q.push(j);
          i = c + 1;
        } else {
          o = max(o, j - i);
          i = j + 1;
        }
      }
    }
    return max(o, (int)nums.size() - i);
  }
};