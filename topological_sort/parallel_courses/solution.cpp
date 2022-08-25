#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimumSemesters(int n, vector<vector<int>>& relations) {
    // If A -> B, then maps stores any nodes mapped to B
    unordered_map<int, unordered_set<int>> m;
    unordered_map<int, int> outDegree;
    for (vector<int>& edge : relations) {
      m[edge[0]].insert(edge[1]);
      outDegree[edge[1]] ++;
    }

    // Find all the leaf
    queue<int> leaves;
    for (int i = 1; i <= n; i++) {
      if (outDegree[i] == 0) leaves.push(i);
    }

    // Topological sort
    int o = 0;
    while (!leaves.empty()) {
      int s = leaves.size();
      n -= s;
      while (s--) {
        int leaf = leaves.front();
        for (int nextCourse : m[leaf]) {
          if (--outDegree[nextCourse] == 0) {
            leaves.push(nextCourse);
          }
        }
        leaves.pop();
      }
      o ++;
    }

    // At the end, if n is not 0, then a cycle
    if (n != 0) return -1;
    return o;
  }
};