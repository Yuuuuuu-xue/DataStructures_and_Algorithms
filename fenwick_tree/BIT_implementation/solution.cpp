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
