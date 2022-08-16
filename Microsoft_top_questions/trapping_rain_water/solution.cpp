#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int trap(vector<int>& height) {
    int o = 0;
    if (height.size() < 3) {
      return o;
    }
    int maxLeftHeight = height[0];
    int maxRightHeight = height[height.size() - 1];
    int left = 1;
    int right = height.size() - 2;
    while (left <= right) {
      if (maxLeftHeight <= maxRightHeight) {
        if (height[left] < maxLeftHeight) {
          o += maxLeftHeight - height[left];
        } else {
          maxLeftHeight = height[left];
        }
        left ++;
      } else {
        if (height[right] < maxRightHeight) {
          o += maxRightHeight - height[right];
        } else {
          maxRightHeight = height[right];
        }
        right --;
      }
    }
    return o;
  }
};