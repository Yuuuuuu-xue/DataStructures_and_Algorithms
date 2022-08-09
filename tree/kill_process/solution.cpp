#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < ppid.size(); i++) {
      m[ppid[i]].push_back(pid[i]);
    }

    vector<int> o;
    queue<int> q;
    q.push(kill);
    while(!q.empty()) {
      o.push_back(q.front());
      for (int item : m[q.front()]) q.push(item);
      q.pop();
    }
    return o;
  }
};