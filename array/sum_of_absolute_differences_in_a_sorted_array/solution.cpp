#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
    vector<int> prefixSum;
    vector<int> suffixSum;
    int currPrefixSum = 0;
    int currSuffixSum = 0;
    for (int i = 0; i < nums.size(); i++) {
      currPrefixSum += nums[i];
      prefixSum.push_back(currPrefixSum);

      currSuffixSum += nums[nums.size() - i - 1];
      suffixSum.push_back(currSuffixSum);
    }
    // suffixSum [5, 8, 10], in a reversed order

    vector<int> o;
    for (int i = 0; i < nums.size(); i++) {
      int curr = 0;
      // Prefix
      if (i > 0) {
        // cout << "prefix " << i - 1 << " " << prefixSum[i - 1] << "\n";
        curr += i * nums[i] - prefixSum[i - 1];
      }

      // Suffix
      if (nums.size() >= 1 + 1 + i) {
        // cout << "suffix " << nums.size() - 1 - 1 - i << " " << suffixSum[nums.size() - 1 - 1 - i] << "\n";
        curr += suffixSum[nums.size() - 1 - 1 - i] - (nums.size() - 1 - i) * nums[i];
      }

      o.push_back(curr);
    }

    return o;
  }
};