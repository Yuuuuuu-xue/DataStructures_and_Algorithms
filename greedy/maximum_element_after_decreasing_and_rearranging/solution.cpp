#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int i = 1;
    for (int num : arr) {
      if (num >= i) {
        i++;
      }
    }
    return i - 1;
  }
};