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
  bool isSameTree(TreeNode* root, TreeNode* subRoot) {
    if (subRoot == nullptr && root == nullptr) return true;
    if (root == nullptr) return false;
    if (subRoot == nullptr) return false;
    return root->val == subRoot->val && isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right);
  }

public:
  bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    bool o = isSameTree(root, subRoot);
    if (o) return o;
    if (root == nullptr) {
      return false;
    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
  }
};