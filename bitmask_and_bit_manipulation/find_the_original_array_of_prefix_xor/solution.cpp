#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> findArray(vector<int>& pref) {
    vector<int> o;
    int curr = 0;
    o.push_back(pref[0]);
    for (int i = 1; i < pref.size(); i++) {
      int bit = curr ^ pref[i];
      o.push_back(bit);
      curr ^= bit;
    }
    return o;
  }
};