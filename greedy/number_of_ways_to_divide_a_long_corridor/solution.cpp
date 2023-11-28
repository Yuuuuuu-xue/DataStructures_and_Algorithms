#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  const int MOD = 1e9 + 7;

  int numberOfWays(string corridor) {
    vector<int> seats;
    for (int i = 0; i < corridor.size(); i++) {
      if (corridor[i] == 'S') {
        seats.push_back(i);
      }
    }

    if (seats.size() == 0 || seats.size() % 2 != 0) {
      return 0;
    }

    long long o = 1;
    int i = 2;
    for (int i = 2; i < seats.size(); i += 2) {
      o = (o * (seats[i] - seats[i - 1])) % MOD;
    }
    return (int)o;
  }
};