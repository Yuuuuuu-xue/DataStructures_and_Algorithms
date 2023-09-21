#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

  vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
    sort(intervals.begin(), intervals.end(), [](const vector<int>& interval1, const vector<int>& interval2) {
      return interval1[1] - interval1[0] < interval2[1] - interval2[0];
    });
    set<pair<int, int>> bst;
    for (int i = 0; i < queries.size(); i++) {
      bst.insert(make_pair(queries[i], i));
    }

    vector<int> o(queries.size(), -1);
    for (vector<int>& interval : intervals) {
      auto it = bst.lower_bound(make_pair(interval[0], 0));
      // Within the interval
      while (it != bst.end() && it->first <= interval[1]) {
        o[it->second] = interval[1] - interval[0] + 1;
        auto nextIt = next(it);
        bst.erase(it);
        it = nextIt;
      }
    }

    return o;
  }
};