#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
  void solve(TreeNode* curr, int low, int high, int& o) {
    if (curr == nullptr) {
      return;
    }
    if (low <= curr->val && curr->val <= high) {
      o += curr->val;
    }
    if (curr->val >= low) {
      solve(curr->left, low, high, o);
    }
    if (curr->val <= high) {
      solve(curr->right, low, high, o);
    }
  }
  
  int rangeSumBST(TreeNode* root, int low, int high) {
    int o = 0;
    solve(root, low, high, o);
    return o;
  }
};