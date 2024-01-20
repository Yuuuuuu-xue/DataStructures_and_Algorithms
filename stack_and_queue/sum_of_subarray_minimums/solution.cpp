#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int sumSubarrayMins(vector<int>& arr) {
    int MOD = 1e9 + 7;
    int n = arr.size();
    vector<int> left(n, -1);
    stack<int> s;

    for (int i = 0; i < n; i++) {
      // s is in strictly decreasing order
      while (!s.empty() && arr[s.top()] >= arr[i]) {
        s.pop();
      }

      if (!s.empty()) {
        left[i] = s.top();
      }
      s.push(i);
    }

    vector<int> right(n, n);
    s = {};
    for (int i = n - 1; i >= 0; i--) {
      // s is in strictly decreasing order
      while (!s.empty() && arr[s.top()] > arr[i]) {
        s.pop();
      }
      if (!s.empty()) {
        right[i] = s.top();
      }
      s.push(i);
    }

    long long o = 0;
    for (int i = 0; i < n; i++) {
      o = (o + (long long)(i - left[i]) * (right[i] - i) * arr[i]) % MOD;
    }
    return o;
  }
};