#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  long long taskSchedulerII(vector<int>& tasks, int space) {
    long long o = -1;
    unordered_map<long long, long long> m;
    for (long i = 0; i < tasks.size(); i++) {
      // If we can perform this job
      if (m.find(tasks[i]) == m.end() || o - m[tasks[i]] - 1 >= space) {
        o ++;
        m[tasks[i]] = o;
      } else {
        // We must take a break
        
        o += 1 + space - (o - m[tasks[i]]);
        m[tasks[i]] = o;
      }
    }
    return o + 1;
  }
};