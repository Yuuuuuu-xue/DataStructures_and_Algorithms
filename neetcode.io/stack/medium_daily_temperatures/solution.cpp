#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> o;
    stack<int> s; // stack of indices

    // Loop back
    for (int i = temperatures.size() - 1; i >= 0; i--) {
      while (!s.empty() && temperatures[s.top()] <= temperatures[i]) s.pop();
      if (s.empty()) {
        o.push_back(0);
      } else {
        o.push_back(s.top() - i);
      }
      s.push(i);
    }
    
    // Since we build it back to front, need to reverse it
    reverse(o.begin(), o.end());
    return o;
  }
};