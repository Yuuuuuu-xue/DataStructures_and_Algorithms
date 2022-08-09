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
  void traverseTree(TreeNode* curr, int currMax, int *o) {
    if (curr != nullptr) {
      if (curr->val >= currMax) {
        *o += 1;
        currMax = max(currMax, curr->val);
      }
      traverseTree(curr->left, currMax, o);
      traverseTree(curr->right, currMax, o);
    }
  }

public:
  int goodNodes(TreeNode* root) {
    int o = 0;
    if (root == nullptr) return o;
    traverseTree(root, root->val, &o);
    return o;
  }
};