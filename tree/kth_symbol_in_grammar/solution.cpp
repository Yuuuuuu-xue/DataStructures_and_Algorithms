#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int kthGrammar(int n, int k) {
    // Base case, root
    if (n == 1 || k == 1) {
      return 0;
    }

    int mid = pow(2, n - 1) / 2;
    if (k > mid) {
      // Right subtree
      return kthGrammar(n - 1, k - mid) == 0 ? 1 : 0;
    }
    // Left Subtree
    return kthGrammar(n - 1, k) == 0 ? 0 : 1;
  }
};