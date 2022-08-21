#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  int backtrack(vector<int>& bitmasks, vector<string>& arr, int curr, int i) {
    int o = 0;
    for (int j = i; j < bitmasks.size(); j++) {
      // Try to concatenate bitmasks[i] and newCurr only if they have no duplicate
      // & two numbers == 0 if they do not have same bit that both equal to 1
      // bitmasks[j] == -1 if duplicate character
      if (bitmasks[j] != -1 && (curr & bitmasks[j]) == 0) {
        // Recursive find the next
        o = max(o, (int)arr[j].size() + backtrack(bitmasks, arr, curr | bitmasks[j], j + 1));
        // Backtrack, since two integer, no need to backtrack
      }
    }
    return o;
  }

public:
  int maxLength(vector<string>& arr) {
    // Convert the array into bitmask
    vector<int> bitmasks;
    for (string& str : arr) {
      int mask = 0;
      for (char c : str) {
        // Duplicate character
        if ((mask & (1 << (c - 97))) != 0) {
          mask = -1;
          break;
        } else {
          mask |= (1 << (c - 97));
        }
      }
      bitmasks.push_back(mask);
    }
    return backtrack(bitmasks, arr, 0, 0);
  }
};