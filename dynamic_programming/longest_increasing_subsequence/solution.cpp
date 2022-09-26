#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxEnvelopes(vector<vector<int>>& envelopes) {
    sort(envelopes.begin(), envelopes.end());
    vector<int> lst;
    lst.push_back(envelopes[0][1]);
    int largestWidth = envelopes[0][0];
    for (int i = 1; i < envelopes.size(); i++) {
      if (lst.back() < envelopes[i][1]) {

        lst.push_back(envelopes[i][1]);
        largestWidth = envelopes[i][0];

      } else {

        lst[lower_bound(lst.begin(), lst.end(), envelopes[i][1]) - lst.begin()] = envelopes[i][1];

      }
    }
    return lst.size();
  }
};