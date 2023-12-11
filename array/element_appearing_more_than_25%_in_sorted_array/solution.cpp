#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int findSpecialInteger(vector<int>& arr) {
    double n = arr.size() / 4.0;
    int o = 1;
    if (o > n) {
      return arr[0];
    }
    for (int i = 1; i < arr.size(); i++) {
      if (arr[i] != arr[i - 1]) {
        o = 1;
      } else {
        o++;
        if (o > n) {
          return arr[i];
        }
      }
    }
    return -1;
  }
};