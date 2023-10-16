#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> getRow(int rowIndex) {
    if (rowIndex == 0) {
      return { 1 };
    }

    vector<int> currRow = {};
    while (rowIndex--) {
      vector<int> nextRow = {};
      nextRow.push_back(1);
      for (int i = 0; currRow.size() > 0 && i < currRow.size() - 1; i++) {
        nextRow.push_back(currRow[i] + currRow[i + 1]);
      }
      nextRow.push_back(1);
      currRow = nextRow;
    }

    return currRow;
  }
};