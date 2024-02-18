#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int mostBooked(int n, vector<vector<int>>& meetings) {
    priority_queue<int> roomPq;
    priority_queue<pair<long long, int>> timeAndRoomPq;

    sort(meetings.begin(), meetings.end());

    for (int i = 0; i < n; i++) {
      roomPq.push(-i);
    }

    vector<int> count(n, 0);

    for (vector<int>& interval : meetings) {
      // cout << "interval: " << interval[0] << " " << interval[1] << "\n";
      // Remove all the rooms that finish before this interval start
      while (!timeAndRoomPq.empty() && -timeAndRoomPq.top().first <= interval[0]) {
        // cout << timeAndRoomPq.top().first << " " << timeAndRoomPq.top().second << "\n";
        roomPq.push(timeAndRoomPq.top().second);
        timeAndRoomPq.pop();
      }

      if (roomPq.empty()) {
        // No room available, this means we need to delay
        // Need to pop one room from the timeAndRoomPq
        auto p = timeAndRoomPq.top();
        timeAndRoomPq.pop();
        timeAndRoomPq.push(make_pair((long long)p.first - (interval[1] - interval[0]), p.second));
        // cout << "room empty: use room: " << -p.second << " with end time " << p.first - interval[1] << " " << -p.first << " " << interval[1] << "\n";
        count[-p.second] ++;
      } else {
        // There is an empty room, use it
        int room = roomPq.top();
        roomPq.pop();
        timeAndRoomPq.push(make_pair(-interval[1], room));
        count[-room] ++;
        // cout << "room not empty: use room: " << -room << " and interval " << interval[1] << "\n";
      }
    }

    int currMax = 0;
    int o = 0;
    for (int i = 0; i < count.size(); i++) {
      if (count[i] > currMax) {
        o = i;
        currMax = count[i];
      }
    }

    return o;
  }
};
