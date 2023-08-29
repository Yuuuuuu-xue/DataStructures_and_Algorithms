#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int bestClosingTime(string customers) {
    int s = 0;
    for (char c : customers) {
      if (c == 'Y') s++;
    }

    int minPenalty = s;
    int optimalHour = 0;
    int currN = 0;
    for (int i = 1; i <= customers.size(); i++) {
      if (customers[i - 1] == 'N') {
        currN ++;
      }
      int penalty = currN + (s - (i - currN));
      if (penalty < minPenalty) {
        minPenalty = penalty;
        optimalHour = i;
      }
    }

    return optimalHour;
  }
};
