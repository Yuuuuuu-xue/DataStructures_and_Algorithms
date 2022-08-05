#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int largestRectangleArea(vector<int>& heights) {
    int o = 0;
    stack<pair<int, int>> s;
    
    // Push a value 0 so can pull the values out of stack in last iteration.
    heights.push_back(0);
    
    for (int i = 0; i < heights.size(); i++) {
      int leftMostIndex = i;
      while (!s.empty() && s.top().second > heights[i]) {
        leftMostIndex = s.top().first;
        o = max(o, (i - leftMostIndex) * s.top().second);
        s.pop();
      }
      
      s.push(make_pair(leftMostIndex, heights[i]));
    }
    return o;
  }
};