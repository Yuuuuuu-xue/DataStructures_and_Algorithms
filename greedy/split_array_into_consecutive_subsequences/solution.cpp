#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isPossible(vector<int>& nums) {
    unordered_map<int, int> unusedNums;
    unordered_map<int, int> subseq;
    for (int num : nums) unusedNums[num] ++;
    for (int num : nums) {
      if (unusedNums[num] == 0) continue;
      unusedNums[num] --;
      if (subseq[num - 1] > 0) {
        // Add to existing subsequence
        subseq[num - 1] --;
        subseq[num] ++;
      } else if (unusedNums[num + 1] > 0 && unusedNums[num + 2] > 0) {
        // Construct a new subsequence
        unusedNums[num + 1] --;
        unusedNums[num + 2] --;
        subseq[num + 2] ++;
      } else {
        return false;
      }
    }
    return true;
  }
};