#include <bits/stdc++.h>

using namespace std;

class BITree {
private:
  int n;
  vector<int> sumArray;

public:
  BITree(int n) {
    this->n = n;
    // n + 1 so 1 based index
    sumArray = vector<int>(n + 1, 0);
  }

  void update(int i, int diff) {
    // Since 1 based index
    i ++;
    while (i <= n) {
      sumArray[i] += diff;
      i += i & (-i);
    }
  }

  int getSum(int i) {
    int o = 0;
    // Since 1 based index
    i ++;
    while (i > 0) {
      o += sumArray[i];
      i -= i & (-i);
    }
    return o;
  }
};

class Solution {
public:
  vector<int> countSmaller(vector<int>& nums) {
    // For each value, add 10e4 as offset
    BITree bitree(2 * 10e4 + 1);
    vector<int> o;
    for (int i = nums.size() - 1; i >= 0; i--) {
      o.push_back(bitree.getSum(nums[i] + 10e4 - 1));
      bitree.update(nums[i] + 10e4, 1);
    }
    reverse(o.begin(), o.end());
    return o;
  }
};