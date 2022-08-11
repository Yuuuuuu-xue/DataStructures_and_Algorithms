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
  int maxPathSum(TreeNode* curr, int* o) {
    int temp = curr->val;
    int leftAndRight = 0;
    if (curr->left != nullptr) {
      int left = maxPathSum(curr->left, o);
      temp = max(temp, left + curr->val);
      *o = max({*o, left, temp});
      leftAndRight += left;
    }
    if (curr->right != nullptr) {
      int right = maxPathSum(curr->right, o);
      temp = max(temp, right + curr->val);
      *o = max({*o, right, temp});
      leftAndRight += right;
    }
    *o = max(*o, leftAndRight + curr->val);
    return temp;
  }
    
public:
  int maxPathSum(TreeNode* root) {
    if (root == nullptr) return 0;
    int o = root->val;
    maxPathSum(root, &o);
    return o;
  }
};
