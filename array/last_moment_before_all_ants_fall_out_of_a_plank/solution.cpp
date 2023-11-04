#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int getLastMoment(int n, vector<int>& left, vector<int>& right) {
    int o = 0;
    for (int pos : left) {
      o = max(o, pos);
    }
    for (int pos : right) {
      o = max(o, n - pos);
    }
    return o;
  }
};