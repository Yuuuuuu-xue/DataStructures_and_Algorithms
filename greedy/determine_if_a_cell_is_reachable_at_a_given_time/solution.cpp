#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
    if (sx == fx && sy == fy && t == 1) {
      return false;
    }
    int diffX = abs(sx - fx);
    int diffY = abs(sy - fy);
    int numDiagonalMoves = min(diffX, diffY);
    int numHorizontalMoves = max(0, diffX - numDiagonalMoves);
    int numVerticalMoves = max(0, diffY - numDiagonalMoves);
    cout << numDiagonalMoves << " " << numHorizontalMoves << " " << numVerticalMoves << " " << diffX << " " << diffY << "\n";
    return numDiagonalMoves + numHorizontalMoves + numVerticalMoves <= t;
  }
};