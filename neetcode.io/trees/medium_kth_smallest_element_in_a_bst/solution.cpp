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
  int traverseTree(TreeNode* curr, int *k) {
    if (curr == nullptr) return -1;
    // Move to the left subtree first
    int o = traverseTree(curr->left, k);
    if (*k == 0) {
      return o;
    }
    *k -= 1;
    // root is the target
    if (*k == 0) {
      return curr->val;
    }
    // Move to the right subtree
    return traverseTree(curr->right, k);
  }

public:
  int kthSmallest(TreeNode* root, int k) {
    int tempK = k;
    return traverseTree(root, &tempK);
  }
};