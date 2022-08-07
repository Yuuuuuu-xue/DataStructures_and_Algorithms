#include <bits/stdc++.h>

using namespace std;

class TimeMap {
private:
  unordered_map<string, vector<pair<int, string>>> m;
public:
  TimeMap() {
    m.clear();
  }
  
  void set(string key, string value, int timestamp) {
    m[key].push_back(make_pair(timestamp, value)); 
  }
  
  string get(string key, int timestamp) {
    if (m[key].size() == 0) {
      return "";
    }
    int left = 0;
    int right = m[key].size() - 1;
    while (right - left > 2) {
      int mid = (left + right) / 2;
      if (m[key][mid].first == timestamp) return m[key][mid].second;
      else if (m[key][mid].first < timestamp) left = mid;
      else right = mid - 1;
    }
    if (m[key][right].first <= timestamp) {
      return m[key][right].second;
    } else if (m[key][left].first <= timestamp) {
      return m[key][left].second;
    }
    return "" ;
  }
};