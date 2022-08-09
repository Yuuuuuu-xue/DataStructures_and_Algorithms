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
  int traverseTree(TreeNode* curr, int currDepth) {
    if (curr == nullptr) return currDepth - 1;
    return max(traverseTree(curr->left, currDepth + 1), traverseTree(curr->right, currDepth + 1));
  }

public:
  int maxDepth(TreeNode* root) {
    return traverseTree(root, 1);
  }
};