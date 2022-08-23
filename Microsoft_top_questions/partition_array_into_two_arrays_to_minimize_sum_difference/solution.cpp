#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
  int minimumDifference(vector<int>& nums) {
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int n = nums.size() / 2;

    // Build the left input array
    vector<pair<int, int>> nums1;
    nums1.push_back({0, 0});
    for (int i = 0; i < n; i++) {
      vector<pair<int, int>> temp;
      for (auto& p : nums1) {
        temp.push_back(p);
        temp.push_back({p.first + 1, p.second + nums[i]});
      }
      nums1 = temp;
    }

    // Build the right input array
    vector<pair<int, int>> nums2;
    nums2.push_back({0, 0});
    for (int i = n; i < 2 * n; i++) {
      vector<pair<int, int>> temp;
      for (auto& p : nums2) {
        temp.push_back(p);
        temp.push_back({p.first + 1, p.second + nums[i]});
      }
      nums2 = temp;
    }

    unordered_map<int, vector<int>> m2;
    for (auto& p : nums2) m2[p.first].push_back(p.second);
    for (auto& p : m2) sort(m2[p.first].begin(), m2[p.first].end());
     

    int o = INT_MAX;
    int target = sum / 2;
    // Try out the possible pairs
    for (auto& p : nums1) {
      // Find the closest sum to the target
      auto itr = lower_bound(m2[n - p.first].begin(), m2[n - p.first].end(), (sum - 2 * p.second) / 2); 
      if (itr != m2[n - p.first].end()) {
        o = min(o, abs(sum - 2 * (p.second + *itr)));
      }
      if (itr != m2[n - p.first].begin()) {
        auto prevItr = prev(itr);
        o = min(o, abs(sum - 2 * (p.second + *prevItr)));
      }
    }
    return o;
  }
};
