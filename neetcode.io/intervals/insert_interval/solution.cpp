#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int left = 0;
    int right = intervals.size() - 1;

    int insertionPointIndex = -1;
    // Binary search to find the insertion point
    while (left <= right) {
      int mid = (left + right) / 2;
      
      // Insertion point, where start_i == start or (start_i < start && start <= end_i)
      if (intervals[mid][0] == newInterval[0] || (intervals[mid][0] < newInterval[0] && newInterval[0] <= intervals[mid][1])) {
        insertionPointIndex = mid;
        break;
      } else if (intervals[mid][1] < newInterval[0]) {
        // end_i < start, then must be in the right
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    if (insertionPointIndex == -1) {
      insertionPointIndex = left;
    }

    // If index is the size, then just append to the end
    if (insertionPointIndex == intervals.size()) {
      intervals.push_back(newInterval);
    } else {
      // Insert at the given index
      intervals.insert(intervals.begin() + insertionPointIndex, newInterval);
    }

    // Merge the interval
    int i = insertionPointIndex + 1;
    while (i < intervals.size()) {
      // Merge overalpping interval

      // Include interval i.e. [3, 10] and [4, 5] where end_i <= end
      if (intervals[i][1] <= newInterval[1]) {
        // Pop it
        intervals[insertionPointIndex][0] = min(intervals[insertionPointIndex][0], intervals[i][0]);
        intervals.erase(intervals.begin() + i);  
      } else if (intervals[i][0] <= newInterval[1] && intervals[i][1] > newInterval[1]) {
        // Overlapping interval i.e. [3, 7] and [4, 9] where start_i <= end and end_i > end
        // Update the value at the given index and remove addition entry
        intervals[insertionPointIndex][0] = min(intervals[insertionPointIndex][0], intervals[i][0]);
        intervals[insertionPointIndex][1] = intervals[i][1];
        intervals.erase(intervals.begin() + i);
        break;
      } else {
        break;
      }
    }

    return intervals;
  }
};
