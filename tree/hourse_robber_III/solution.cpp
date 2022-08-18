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
  pair<int, int> dfs(TreeNode* curr) {
    if (curr == nullptr) return {0, 0};
    pair<int, int> left = dfs(curr->left);
    pair<int, int> right = dfs(curr->right);
    return {curr->val + left.second + right.second, max({left.first + right.first, left.first + right.second, left.second + right.first, left.second + right.second}) };
  }

public:
  int rob(TreeNode* root) {
    pair<int, int> p = dfs(root);
    return max(p.first, p.second);
  }
};
