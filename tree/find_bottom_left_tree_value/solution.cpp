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
  int findBottomLeftValue(TreeNode* root) {
    vector<TreeNode *> q;
    int level = 0;
    int o = root->val;
    q.push_back(root);

    while (!q.empty()) {
      // cout << q.front()->val << "\n";
      o = q.front()->val;

      vector<TreeNode *> nextQ;
      for (TreeNode* node : q) {
        if (node->left != nullptr) {
          nextQ.push_back(node->left);
        }
        if (node->right != nullptr) {
          nextQ.push_back(node->right);
        }
      }

      q = nextQ;
    }

    return o;
  }
};
