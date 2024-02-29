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
  bool isEvenOddTree(TreeNode* root) {
    vector<TreeNode *> q;
    q.push_back(root);
    int level = 0;

    while (!q.empty()) {
      vector<TreeNode *> nextQ;
      // Since we can assume node value >= 1
      int curr;
      if (level % 2 == 0) {
        curr = 0;
      } else {
        curr = INT_MAX;
      }

      for (TreeNode *node : q) {
        if (level % 2 == 0) {
          if (node->val % 2 == 0) {
            return false;
          }
          if (node->val <= curr) {
            return false;
          }
        } else {
          if (node->val % 2 != 0) {
            return false;
          }
          if (node->val >= curr) {
            return false;
          }
        }

        curr = node->val;

        if (node->left != nullptr) {
          nextQ.push_back(node->left);
        }
        if (node->right != nullptr) {
          nextQ.push_back(node->right);
        }
      }

      level ++;
      q = nextQ;
    }

    return true;
  }
};
