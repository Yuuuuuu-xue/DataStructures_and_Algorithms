#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
    // Build the bitmask
    unordered_map<int, short> bitmasks;
    for (vector<int>& seats : reservedSeats) {
      bitmasks[seats[0] - 1] |= 1 << (seats[1] - 1);
    }

    short case1 = 0b0111100000;
    short case2 = 0b0001111000;
    short case3 = 0b0000011110;

    // WILL TLE    
    // int o = 0;
    // for (int i = 0; i < n; i++) {
    //   o += (case1 & bitmasks[i]) == 0 || (case3 & bitmasks[i]) == 0 ? ((case1 & bitmasks[i]) == 0) + ((case3 & bitmasks[i]) == 0) : (case2 & bitmasks[i]) == 0;
    // }

    int o = 2 * n;
    for (auto p : bitmasks) {
      // If either case 1 or case 3 failed
      if ((case1 & p.second) != 0 || (case3 & p.second) != 0) {
        // needed to -1.
        o -= 1;
        // Now -1 if case1, 2 and 3 all failed
        o -= (case1 & p.second) != 0 && (case2 & p.second) != 0 && (case3 & p.second) != 0;
      }
    }
    return o;
  }
};