#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> singleNumber(vector<int>& nums) {
    long bitmask = 0;
    for (int num : nums) bitmask ^= num;

    // the rightmost 1 bit set to 1 and rest to 0
    long diff = bitmask & (-bitmask);
    
    int x = 0;
    for (int num : nums) {
      if ((num & diff) != 0) x ^= num;
    }

    return { (int)x, (int)(bitmask ^ x) };
  }
};