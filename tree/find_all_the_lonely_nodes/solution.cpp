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
  void traverseTree(TreeNode* curr, vector<int> &lonelyChildren) {
    if (curr->left != nullptr && curr->right != nullptr) {
      // Both child, then traverse both child
      traverseTree(curr->left, lonelyChildren);
      traverseTree(curr->right, lonelyChildren);
    } else if(curr->left != nullptr) {
      // Only left lonely child
      lonelyChildren.push_back(curr->left->val);
      traverseTree(curr->left, lonelyChildren);
    } else if (curr->right != nullptr) {
      // Only right lonely child
      lonelyChildren.push_back(curr->right->val);
      traverseTree(curr->right, lonelyChildren);
    }
    // Leaf then do nothing
  }

public:
  vector<int> getLonelyNodes(TreeNode* root) {
    vector<int> lonelyChildren;
    if (root == nullptr) return lonelyChildren;
    traverseTree(root, lonelyChildren);
    return lonelyChildren;
  }
};