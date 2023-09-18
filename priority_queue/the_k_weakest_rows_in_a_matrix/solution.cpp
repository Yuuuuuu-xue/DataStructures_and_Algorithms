#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int getNumSolders(vector<int>& row) {
    int left = 0;
    int right = row.size() - 1;
    while (left <= right) {
      int mid = (left + right) / 2;
      if (row[mid] == 0) {
        right = mid - 1;
      } else {
        // 1, then possibly mid is the solution
        left = mid + 1;
      }
    }
    return left;
  }

  struct Compare {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
      if (p1.first > p2.first) {
        return true;
      } else if (p1.first < p2.first) {
        return false;
      } else {
        return p1.second > p2.second;
      }
    }
  };

  vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    for (int i = 0; i < mat.size(); i++) {
      pq.push(make_pair(getNumSolders(mat[i]), i));
    }
    vector<int> numSoliders;
    while (k--) {
      numSoliders.push_back(pq.top().second);
      pq.pop();
    }
    return numSoliders;
  }
};