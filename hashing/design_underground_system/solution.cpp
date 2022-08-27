#include <bits/stdc++.h>

using namespace std;

class UndergroundSystem {
private:
  unordered_map<int, pair<string, int>> m1;
  unordered_map<string, pair<int, int>> m2;

public:
  UndergroundSystem() {
    m1.clear();
    m2.clear();
  }
  
  void checkIn(int id, string stationName, int t) {
    m1[id] = { stationName, t };
  }
  
  void checkOut(int id, string stationName, int t) {
    string hashKey = m1[id].first + " " + stationName;
    if (m2.find(hashKey) == m2.end()) {
      m2[hashKey] = { t - m1[id].second, 1 };
    } else {
      m2[hashKey].first += t - m1[id].second;
      m2[hashKey].second ++;
    }
  }
  
  double getAverageTime(string startStation, string endStation) {
    string hashKey = startStation + " " + endStation;
    return (double)m2[hashKey].first / m2[hashKey].second;
  }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */