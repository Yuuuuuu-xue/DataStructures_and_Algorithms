#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maximizeSweetness(vector<int>& sweetness, int k) {
    int left = *min_element(sweetness.begin(), sweetness.end());
    int right = accumulate(sweetness.begin(), sweetness.end(), 0);

    while (left < right) {
      int mid = (left + right) / 2;
      
      int currSweetness = 0;
      int numPerson = 0;
      for (int s : sweetness) {
        currSweetness += s;
        if (currSweetness >= mid) {
          currSweetness = 0;
          numPerson ++;
        }
      }

      if (numPerson >= k + 1) {
        // Move to the right
        left = mid;
      } else {
        // Move to the left
        right = mid - 1;
      }
    }
    return left;
  }
};