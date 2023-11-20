#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    travel.insert(travel.begin(), 0);
    int m = -1;
    int p = -1;
    int g = -1;

    for (int i = 0; i < garbage.size(); i++) {
      if (garbage[i].find('M') != string::npos) {
        m = i;
      }
      if (garbage[i].find('P') != string::npos) {
        p = i;
      }
      if (garbage[i].find('G') != string::npos) {
        g = i;
      }
    }

    // cout << m << " " << p << " " << g << "\n";

    int o = 0;
    for (int i = 0; i <= m; i++) {
      // Travel time
      o += travel[i];
      // Pick up time
      o += count(garbage[i].begin(), garbage[i].end(), 'M');
    }

    for (int i = 0; i <= p; i++) {
      o += travel[i];
      o += count(garbage[i].begin(), garbage[i].end(), 'P');
      // cout << "P: " << i << " " << travel[i] << " " << count(garbage[i].begin(), garbage[i].end(), 'P') << "\n";
    }

    for (int i = 0; i <= g; i++) {
      o += travel[i];
      o += count(garbage[i].begin(), garbage[i].end(), 'G');
    }

    return o;
  }
};