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
  void dfs(TreeNode* curr, int &o, unordered_map<int, int> &m, int x) {
    m[curr->val] ++;
    if (m[curr->val] % 2 == 0) {
      x --;
    } else {
      x ++;
    }
    if (curr->left == nullptr && curr->right == nullptr) {
      if (x <= 1) o++;
    } else {

      if (curr->left != nullptr) {
        dfs(curr->left, o, m, x);
      }
      if (curr->right != nullptr) {
        dfs(curr->right, o, m, x);
      }
    }
    // Backtrack
    m[curr->val] --;
  }

public:
  int pseudoPalindromicPaths (TreeNode* root) {
    int o = 0;
    unordered_map<int, int> m;
    dfs(root, o, m, 0);
    return o;
  }
};