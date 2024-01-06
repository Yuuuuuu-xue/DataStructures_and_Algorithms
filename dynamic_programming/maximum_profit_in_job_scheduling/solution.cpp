#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

  int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    int n = startTime.size();
    vector<pair<int, int>> endTimeToIndex;
    for (int i = 0; i < n; i++) {
      endTimeToIndex.push_back(make_pair(endTime[i], i));
    }
    sort(endTimeToIndex.begin(), endTimeToIndex.end());

    auto comparator = [](int value, const pair<int, int>& element) {
      return value < element.first;
    };

    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      dp[i] = dp[i - 1];
      int idx = endTimeToIndex[i - 1].second;
      auto targetIt = upper_bound(endTimeToIndex.begin(), endTimeToIndex.end(), startTime[idx], comparator);
      int targetI = distance(endTimeToIndex.begin(), prev(targetIt)) + 1;

      dp[i] = max(dp[i], dp[targetI] + profit[idx]);
      // cout << i << " " << idx << " " << startTime[idx] << " " << endTime[idx] << " " << profit[idx] << " " << dp[i] << " " << dp[targetI] << "\n";
    }

    return dp[n];
  }
};