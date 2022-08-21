#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxDistToClosest(vector<int>& seats) {
    int left = 0;
    int right = seats.size() - 1;
    while (seats[left] != 1) left ++;
    while (seats[right] != 1) right --;
    int o = max(left - 0, (int)seats.size() - 1 - right);
    
    // Now consider both side has a person sitting down
    while (left < right) {
      // cout << left << " " << right << "\n";
      int newLeft = left + 1;
      while (seats[newLeft] != 1) newLeft ++;
      o = max(o, (newLeft - left) / 2);
      left = newLeft;
    }
    return o;
  }
};