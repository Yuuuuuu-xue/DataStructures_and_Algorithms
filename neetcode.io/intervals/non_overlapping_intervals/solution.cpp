#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    int minNumIntervals = 0;
    int currEnd = intervals[0][1];
    
    for (int i = 1; i < intervals.size(); i++) {
      if (intervals[i][0] < currEnd) {
        // Overlapping
        currEnd = min(currEnd, intervals[i][1]);
        minNumIntervals ++;
      } else {
        currEnd = intervals[i][1];
      }
    }
    return minNumIntervals;
  }
};