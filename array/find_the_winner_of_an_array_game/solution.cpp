#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int getWinner(vector<int>& arr, int k) {
    int currWinner = arr[0];
    int currWins = 0;
    for (int i = 1; i < arr.size(); i++) {
      if (currWinner > arr[i]) {
        currWins += 1;
      } else {
        currWinner = arr[i];
        currWins = 1;
      }

      if (currWins >= k) {
        return currWinner;
      }
    }
    return currWinner;
  }
};