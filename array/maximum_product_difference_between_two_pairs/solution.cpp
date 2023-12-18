#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxProductDifference(vector<int>& nums) {
    int largest = max(nums[0], nums[1]);
    int secondLargest = min(nums[0], nums[1]);

    int smallest = secondLargest;
    int secondSmallest = largest;

    for (int i = 2; i < nums.size(); i++) {
      if (nums[i] > largest) {
        secondLargest = largest;
        largest = nums[i];
      } else if (nums[i] > secondLargest) {
        secondLargest = nums[i];
      }

      if (nums[i] < smallest) {
        secondSmallest = smallest;
        smallest = nums[i];
      } else if (nums[i] < secondSmallest) {
        secondSmallest = nums[i];
      }
    }

    return largest * secondLargest - smallest * secondSmallest;
  }
};