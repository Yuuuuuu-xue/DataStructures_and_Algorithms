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

class NumArray {
private:
  BITree *bitree;
  vector<int> nums;

public:
  NumArray(vector<int>& nums) {
    bitree = new BITree(nums.size());
    for (int i = 0; i < nums.size(); i++) {
      bitree->update(i, nums[i]);
    }
    this->nums = nums;
  }
  
  void update(int index, int val) {
    bitree->update(index, (val - nums[index]));
    nums[index] = val;
  }
  
  int sumRange(int left, int right) {
    return bitree->getSum(right) - bitree->getSum(left - 1);
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */