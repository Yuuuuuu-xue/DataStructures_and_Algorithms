#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minOperations(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    queue<int> q;
    int maxSize = 0;
    for (int num : nums) {
      while(!q.empty() && num - q.front() >= n) {
        q.pop();
      }
      q.push(num);
      maxSize = max(maxSize, (int)q.size());
    }
    return n - maxSize;
  }
};