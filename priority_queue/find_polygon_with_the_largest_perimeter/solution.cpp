#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  long long largestPerimeter(vector<int>& nums) {
    priority_queue<int> pq;
    long long s = 0;

    for (int num : nums) {
      s += num;
      pq.push(num);
    }

    while (pq.size() > 2) {
      if (s - pq.top() > pq.top()) {
        return s;
      }
      s -= pq.top();
      pq.pop();
    }

    return -1;
  }
};