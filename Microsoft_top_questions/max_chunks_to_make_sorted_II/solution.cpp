#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxChunksToSorted(vector<int>& arr) {
    // Build the dp for the smallest element in the remaining elements
    vector<int> dp(arr.size());
    // Base case
    dp[arr.size() - 1] = arr[arr.size() - 1];
    for (int i = arr.size() - 2; i >= 0; i--) {
      dp[i] = min(arr[i], dp[i + 1]);
    }
    int currMax = -1;

    // Greedy strategy: end with a chunk such that last element is the smallest element of the remaining elements
    int o = 0;
    for (int i = 0; i < arr.size(); i++) {
      currMax = max(currMax, arr[i]);
      // Less than or equal to the remaining elements, then found one chunk
      if (i + 1 == arr.size() || currMax <= dp[i + 1]) {
        o ++;
        currMax = -1;
      }
    }
    return o;
  }
};