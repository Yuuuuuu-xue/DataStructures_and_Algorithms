#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool winnerOfGame(string colors) {
    int numThreeConseA = 0;
    int numThreeConseB = 0;

    if (colors.size() < 3) {
      return false;
    }

    for (int i = 0; i < colors.size() - 2; i++) {
      if (colors[i] == 'A' && colors[i + 1] == 'A' && colors[i + 2] == 'A') {
        numThreeConseA ++;
      } else if (colors[i] == 'B' && colors[i + 1] == 'B' && colors[i + 2] == 'B') {
        numThreeConseB ++;
      }
    }

    return numThreeConseA > numThreeConseB;
  }
};