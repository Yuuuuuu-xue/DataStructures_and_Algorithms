#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
    vector<int> inorderDegree(n, 0);
    unordered_map<int, vector<int>> graph;
    for (vector<int>& p : relations) {
      if (graph.find(p[0]) == graph.end()) {
        graph[p[0]] = { p[1] };
      } else {
        graph[p[0]].push_back(p[1]);
      }
      // -1 since 1 index based
      inorderDegree[p[1] - 1] ++;
    }

    vector<int> minTime(n, 0);
    queue<int> q;
    for (int i = 0; i < inorderDegree.size(); i++) {
      if (inorderDegree[i] == 0) {
        minTime[i] = time[i];
        q.push(i + 1);
      }
    }

    while (!q.empty()) {
      int i = q.front();
      q.pop();

      for (int nextCourse : graph[i]) {
        // Update the min time, min time to take the preq req time + time needed for current course
        minTime[nextCourse - 1] = max(minTime[nextCourse - 1], minTime[i - 1] + time[nextCourse - 1]);
        if (--inorderDegree[nextCourse - 1] == 0) {
          q.push(nextCourse);
        }
      }
    }

    int minTimeRequired = 0;
    for (int t : minTime) {
      minTimeRequired = max(minTimeRequired, t);
    }
    return minTimeRequired;
  }
};