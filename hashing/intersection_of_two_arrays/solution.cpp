#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s(nums1.begin(), nums1.end());
    unordered_set<int> o;

    for (int num : nums2) {
      if (s.find(num) != s.end()) {
        o.insert(num);
      }
    }

    return vector<int>(o.begin(), o.end());
  }
};
