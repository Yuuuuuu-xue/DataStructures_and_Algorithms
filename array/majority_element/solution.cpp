#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int majorityElement(vector<int>& nums) {
    int candidate;
    int vote = 0;

    for (int num : nums) {
      if (vote == 0) {
        candidate = num;
      }

      if (candidate == num) {
        vote ++;
      } else {
        vote --;
      }
    }

    return candidate;
  }
};
