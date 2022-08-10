#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int openLock(vector<string>& deadends, string target) {
    unordered_set<string> seen;
    for (string s : deadends) {
      seen.insert(s);
    }
    if (seen.find("0000") != seen.end()) return -1;
    queue<string> q;
    q.push("0000");
    seen.insert("0000");
    int currStep = 0;
    while (!q.empty()) {
      int s = q.size();
      for (int i = 0; i < s; i++) {
        if (q.front() == target) return currStep;
        for (int i = 0; i < 4; i++) {
          for (int incre : {-1, 1}) {
            string nextLock = q.front();
            nextLock[i] += incre;
            if (nextLock[i] > 57) nextLock[i] = 48;
            if (nextLock[i] < 48) nextLock[i] = 57;
            if (seen.find(nextLock) == seen.end()) {
              seen.insert(nextLock);
              q.push(nextLock);
            }
          }
        }
        q.pop();
      }
      currStep++;
    }
    return -1;
  }
};
