#include <bits/stdc++.h>

using namespace std;

class SparseVector {

public:
  vector<pair<int, int>> lst;

  SparseVector(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      lst.push_back(make_pair(i, nums[i]));
    }
  }
  
  // Return the dotProduct of two sparse vectors
  int dotProduct(SparseVector& vec) {
    int pointer1 = 0;
    int pointer2 = 0;
    int o = 0;
    while (pointer1 < lst.size() && pointer2 < vec.lst.size()) {
      if (lst[pointer1].first == vec.lst[pointer2].first) {
        o += lst[pointer1].second * vec.lst[pointer2].second;
        pointer1 ++;
        pointer2 ++;
      } else if (lst[pointer1].first < vec.lst[pointer2].first) {
        pointer1 ++;
      } else {
        pointer2 ++;
      }
    }
    return o;
  }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);