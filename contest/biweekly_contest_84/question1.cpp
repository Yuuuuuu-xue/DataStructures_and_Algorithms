#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    map<int, int> m;
    for (vector<int> item : items1) m[item[0]] += item[1];
    for (vector<int> item : items2) m[item[0]] += item[1];
    vector<vector<int>> o;
    for (auto p : m) o.push_back({ p.first, p.second });
    return o;
  }
};