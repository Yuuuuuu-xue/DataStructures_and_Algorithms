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
private:
  bool traverseTree(TreeNode* curr, int *height) {
    if (curr == nullptr) {
      *height = 0;
      return true;
    }
    bool o;
    // Get the left subtree height
    int left;
    o = traverseTree(curr->left, &left);
    if (!o) return o;
    int right;
    o = traverseTree(curr->right, &right);
    if (!o) return o;

    // Check if it is balanced
    if (abs(right - left) > 1) {
      return false;
    }
    *height = max(left, right) + 1;
    return true;
  }

public:
  bool isBalanced(TreeNode* root) {
    int dummy;
    return traverseTree(root, &dummy);
  }
};