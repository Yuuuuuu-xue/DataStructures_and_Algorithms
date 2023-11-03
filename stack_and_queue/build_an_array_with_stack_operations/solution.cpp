#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<string> buildArray(vector<int>& target, int n) {
    vector<string> operations;

    int i = 1;
    for (int j = 0; j < target.size(); j++) {
      // Not equal
      while (i != target[j]) {
        operations.push_back("Push");
        operations.push_back("Pop");
        i++;
      }

      i++;
      operations.push_back("Push");
    }
    return operations;
  }
};