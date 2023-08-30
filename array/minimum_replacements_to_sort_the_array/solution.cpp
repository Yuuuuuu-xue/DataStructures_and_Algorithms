#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  long long minimumReplacement(vector<int>& nums) {
    long long minReplacement = 0;
    int n = nums.size();

    // Start from back
    for (int i = n - 2; i >= 0; i--) {
      if (nums[i] > nums[i + 1]) {
        // Need to break nums[i]
        // 7 -> 2, 2, 3
        minReplacement += nums[i] / nums[i + 1];
        int replaceTo = nums[i] / (nums[i] / nums[i + 1] + (nums[i] % nums[i + 1] > 0));
        if (nums[i] % nums[i + 1] == 0) {
          minReplacement --;
        }

        // cout << nums[i] << " " << nums[i + 1] << " " << nums[i] / nums[i + 1] << " " << nums[i] / (nums[i] / nums[i + 1]) << " " << replaceTo << "\n";
        nums[i] = replaceTo;
      }
    }

    return minReplacement;
  }
};
