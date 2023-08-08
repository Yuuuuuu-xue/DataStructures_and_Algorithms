#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct Comparator {
    bool operator()(int a, int b) {
      return a > b;
    }
  };

  int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, Comparator> pq;

    for (int num : nums) {
      pq.push(num);
      if (pq.size() > k) pq.pop();
    }

    return pq.top();
  }
};