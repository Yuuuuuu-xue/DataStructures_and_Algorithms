#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> findErrorNums(vector<int>& nums) {
    unordered_set<int> s;
    int duplicateNum = 0;
    int sum = 0;

    for (int num : nums) {
      if (s.find(num) == s.end()) {
        s.insert(num);
        sum += num;
      } else {
        duplicateNum = num;
      }
    }

    int n = nums.size();
    return { duplicateNum, n * (n + 1) / 2 - sum };
  }
};