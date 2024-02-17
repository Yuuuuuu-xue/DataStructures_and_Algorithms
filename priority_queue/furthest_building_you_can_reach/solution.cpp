#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    priority_queue<int> pq;
    for (int i = 0; i < heights.size() - 1; i++) {
      int numBricks = heights[i + 1] - heights[i];
      if (numBricks <= 0) {
        continue;
      }

      pq.push(numBricks);
      if (bricks >= numBricks) {
        bricks -= numBricks;
      } else {
        if (ladders <= 0) {
          return i;
        }
        bricks += pq.top();
        pq.pop();
        bricks -= numBricks;
        ladders --;
      }
    }

    return heights.size() - 1;
  }
};