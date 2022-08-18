#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minMeetingRooms(vector<vector<int>>& intervals) {
    // Sort by end time
    sort(intervals.begin(), intervals.end());
      
    priority_queue<int> pq;
    for (vector<int>& interval : intervals) {
      if (!pq.empty() && -pq.top() <= interval[0]) {
        pq.pop();
      }
      pq.push(-interval[1]);
    }
    return pq.size();
  }
};