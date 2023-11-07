#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    vector<int> arrivalTime;
    for (int i = 0; i < dist.size(); i++) {
      arrivalTime.push_back(ceil((double)dist[i] / speed[i]));
    }
    sort(arrivalTime.begin(), arrivalTime.end(), [](int a, int b){
      return a < b;
    });

    for (int i = 0; i < arrivalTime.size(); i++) {
      cout << i << " " << arrivalTime[i] << "\n";
      if (arrivalTime[i] < i + 1) {
        return i;
      }
    }

    return arrivalTime.size();

  }
};