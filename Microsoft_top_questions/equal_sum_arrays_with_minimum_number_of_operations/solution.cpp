#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minOperations(vector<int>& nums1, vector<int>& nums2) {
    int sum1 = accumulate(nums1.begin(), nums1.end(), 0);
    int sum2 = accumulate(nums2.begin(), nums2.end(), 0);
    vector<int>* higherNums = &nums1;
    vector<int>* lowerNums = &nums2;
    if (sum2 > sum1) {
      higherNums = &nums2;
      lowerNums = &nums1;
    }

    int diff = abs(sum1 - sum2);
    if (diff == 0) return 0;

    // Build the operation map
    unordered_map<int, int> m;
    for (int num : *higherNums) m[num - 1] ++;
    for (int num : *lowerNums) m[6 - num] ++;

    int o = 0;
    for (int i = 5; i > 0; i--) {
      int numOperationsNeeded = diff / i + (diff % i != 0);
      // cout << diff << " " << i << " " << numOperationsNeeded << " " << m[i] << "\n";
      if (m[i] >= numOperationsNeeded) {
        return o + numOperationsNeeded;
      } else {
        diff -= m[i] * i;
        o += m[i];
      }
    }
    return -1;
  }
};