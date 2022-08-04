#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<pair<int, int>> dq;
    // Update dq for the first sliding window
    for (int i = 0; i < k; i++) {
      while (!dq.empty() && dq.back().first <= nums[i]) dq.pop_back();
      dq.push_back(make_pair(nums[i], i));
    }
    vector<int> o;
    // Leftmost value will be our deque value
    o.push_back(dq.front().first);

    // Loop over every window (except for the first one) and update the solution.
    for (int i = k; i < nums.size(); i++) {
      // Add current value to the deque
      while (!dq.empty() && dq.back().first <= nums[i]) dq.pop_back();
      dq.push_back(make_pair(nums[i], i));

      // pop values from left that is not in the window
      while (!dq.empty() && i - dq.front().second + 1 > k) dq.pop_front();

      // Top value is the target
      o.push_back(dq.front().first);
    }
    return o;
  }
};