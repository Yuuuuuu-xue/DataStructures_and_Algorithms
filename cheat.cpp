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

  int findLongestChain(vector<vector<int>>& pairs) {
    auto compare  = [](const vector<int>& p1, const vector<int>& p2) {
      if (p1[1] < p2[1]) {
        return true;
      } else if (p1[1] == p2[1]) {
        return p1[0] < p2[0];
      }
      return false;
    };

    struct Compare {
      bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.first > p2.first;
      }
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    string words = "hello,how,you";
    stringstream  ss(words);
    string str;
    vector<string> results;
    while (getline(ss, str, ',')) {
        results.push_back(str);
    }
  }

};
