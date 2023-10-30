#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> sortByBits(vector<int>& arr) {
    unordered_map<int, int> m;
    for (int num : arr) {
      int curr = num;
      int currOneBit = 0;
      while (curr != 0) {
        if (curr % 2 != 0) {
          currOneBit ++;
        }
        curr = curr >> 1;
      }
      m[num] = currOneBit;
    }

    sort(arr.begin(), arr.end(), [&m](int a, int b) {
      if (m[a] < m[b]) {
        return true;
      } else if (m[a] > m[b]) {
        return false;
      }
      return a < b;
    });

    return arr;
  }
};