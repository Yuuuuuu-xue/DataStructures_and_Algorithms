#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct Comparator {
    bool operator()(const vector<int>&a, const vector<int>&b) {
      return a[1] > b[1];
    }
  };

  vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
    sort(flowers.begin(), flowers.end(), [](const vector<int>& a, const vector<int>&b) {
      return a[0] < b[0];
    });

    vector<pair<int, int>> time_with_index;
    for (int i = 0; i < people.size(); i++) {
      time_with_index.push_back(make_pair(people[i], i));
    }
    sort(time_with_index.begin(), time_with_index.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
      return a.first < b.first;
    });

    priority_queue<vector<int>, vector<vector<int>>, Comparator> pq;
    vector<int> o(people.size(), 0);
    int i = 0;  
    int m = flowers.size();

    for (auto& p : time_with_index) {
      while (i < m && flowers[i][0] <= p.first) {
        pq.push(flowers[i]);
        i ++;
      }

      while (!pq.empty() && pq.top()[1] < p.first) {
        pq.pop();
      }

      o[p.second] = pq.size();
    }
    return o;
  }
};