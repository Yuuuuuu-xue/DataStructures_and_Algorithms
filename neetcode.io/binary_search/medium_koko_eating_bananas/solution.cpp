#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    int o = right;
    while (left <= right) {
      long mid = (left + right) / 2;
      long curr = 0;
      for (int pile : piles) curr += pile / mid + (pile % mid != 0);
      // If works
      if (curr <= h) {
        o = mid;
        // Move to the left side and try a smaller value
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return o;
  }
};