#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct PairHash {
    template <class T1, class T2>
    size_t operator () (const pair<T1, T2>& p) const {
      auto h1 = hash<T1>{}(p.first);
      auto h2 = hash<T2>{}(p.second);

      return h1 ^ h2;
    }
  };

  bool isPathCrossing(string path) {
    unordered_set<pair<int, int>,  PairHash> s;
    int currX = 0;
    int currY = 0;
    s.insert(make_pair(0, 0));

    for (char c : path) {
      if (c == 'N') {
        currY += 1;
      } else if (c == 'E') {
        currX += 1;
      } else if (c == 'S') {
        currY -= 1;
      } else { 
        currX -= 1;
      }

      pair<int, int> currPos = make_pair(currX, currY);
      if (s.find(currPos) == s.end()) {
        s.insert(currPos);
      } else {
        return true;
      }
    }

    return false;
  }
};