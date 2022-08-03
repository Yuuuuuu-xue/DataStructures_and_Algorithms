#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxArea(vector<int>& height) {
    int o = 0;
    int left = 0;
    int right = height.size() - 1;
    while (left < right) {
      int minHeight = min(height[left], height[right]);
      o = max(o, minHeight * (right - left));
      while(left < right && height[left] <= minHeight) left ++;
      while(left < right && height[right] <= minHeight) right --;
    }
    return o;
  }
};