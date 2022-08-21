#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> sumZero(int n) {
    vector<int> o;
    for (int i = 0; i < n / 2; i++) {
      o.push_back(i + 1);
      o.push_back(-i - 1);
    }
    if (n % 2 != 0) o.push_back(0);
    return o;
  }
};