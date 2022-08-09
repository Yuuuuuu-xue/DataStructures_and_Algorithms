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
  bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q != nullptr) return false;
    if (p != nullptr && q == nullptr) return false;
    if (p == nullptr && q == nullptr) return true;
    if (p->val != q->val) return false;

    // Check the subtree
    bool o = isSameTree(p->left, q->left);
    if (!o) return o;
    o = isSameTree(p->right, q->right);
    return o;
  }
};