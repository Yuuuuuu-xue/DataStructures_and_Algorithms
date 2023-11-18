#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int o = 1;
    long long i = 0;
    long long j = 1;
    long long currSum = nums[0];
    while (j < nums.size()) {
      while ((j - i) * nums[j] - currSum > k) {
        currSum -= nums[i];
        i++;
      }
      currSum += nums[j];
      // cout << i << " " << j + 1 << " " << j - i + 1 << " " << nums[j] << "\n";
      j++;
      o = max(o, (int)(j - i));

    }
    return o;
  }
};