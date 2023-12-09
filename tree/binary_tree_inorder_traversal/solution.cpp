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
  void solve(TreeNode* curr, vector<int>& nodes) {
    if (curr == nullptr) {
      return;
    }

    solve(curr->left, nodes);
    nodes.push_back(curr->val);
    solve(curr->right, nodes);
  }

  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> o;
    solve(root, o);
    return o;  
  }
};