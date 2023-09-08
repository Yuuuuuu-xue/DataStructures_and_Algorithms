#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct Comparator {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
      return a.first > b.first;
    }
  };

  bool isNStraightHand(vector<int>& hand, int groupSize) {
    if (hand.size() % groupSize != 0) {
      return false;
    }
    
    unordered_map<int, int> m;
    for (int num : hand) {
      if (m.find(num) == m.end()) {
        m[num] = 1;
      } else {
        m[num] ++;
      }
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, Comparator> pq;
    for (auto& p : m) {
      pq.push(p);
    }

    while (!pq.empty()) {
      vector<pair<int, int>> lst;
      int prevNum = -1;
      for (int i = 0; i < groupSize; i++) {
        pair<int, int> top = pq.top();
        pq.pop();
        if (prevNum >= 0 && top.first - 1 != prevNum) {
          return false;
        }
        if (top.second > 1) {
          top.second --;
          lst.push_back(top);
        }

        prevNum = top.first;
      }

      for (pair<int, int>& p : lst) {
        pq.push(p);
      }
    }

    return true;
    
  }
};