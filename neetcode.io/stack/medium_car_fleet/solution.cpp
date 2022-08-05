#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//   int carFleet(int target, vector<int>& position, vector<int>& speed) {
//     unordered_map<int, double> m;
//     for (int i = 0; i < position.size(); i++) {
//       m[position[i]] = (double)(target - position[i]) / speed[i];
//     }
//     sort(position.begin(), position.end(), greater<>());
    
//     int o = 1;
//     double currTime = m[position[0]];
//     for (int i = 1;  i < position.size(); i++) {
//       if (m[position[i]] > currTime) {
//         o ++;
//         currTime = m[position[i]];
//       }
//     }
//     return o;
//   }
// };

// We can use a map instead since it will sort the value, make the key to be negative so sort in decreasing order
class Solution {
public:
  int carFleet(int target, vector<int>& position, vector<int>& speed) {
    map<int, double> m;
    for (int i = 0; i < position.size(); i++) {
      m[-position[i]] = (double)(target - position[i]) / speed[i];
    }

    int o = 0;
    double currTime = 0;
    for (auto p : m) {
      if (p.second > currTime) {
        o ++;
        currTime = p.second;
      }
    }
    return o;
  }
};