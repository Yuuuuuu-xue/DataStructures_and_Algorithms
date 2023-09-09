#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
    bool a = false;
    bool b = false;
    bool c = false;

    for (int i = 0; i < triplets.size(); i++) {

      if (triplets[i][0] == target[0] && !a && triplets[i][1] <= target[1] && triplets[i][2] <= target[2]) {
        cout << "a: " << i << "\n";
        a = true;
      }

      if (triplets[i][1] == target[1] && !b && triplets[i][0] <= target[0] && triplets[i][2] <= target[2]) {
        cout << "b: " << i << "\n";
        b = true;
      }

      if (triplets[i][2] == target[2] && !c && triplets[i][0] <= target[0] && triplets[i][1] <= target[1]) {
        cout << "c: " << i << "\n";
        c = true;
      }
      
      if (a && b && c) {
        return true;
      }
    }

    return false;
  }
};