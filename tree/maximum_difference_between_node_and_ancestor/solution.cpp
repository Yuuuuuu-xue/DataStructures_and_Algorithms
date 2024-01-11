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
  int solve(TreeNode* curr, int currMin, int currMax) {
    if (curr == nullptr) {
      return 0;
    }
    // cout << currMin << " " << currMax << " " << curr->val << "\n";
    int o = max(abs(currMin - curr->val), abs(currMax - curr->val));
    currMin = min(currMin, curr->val);
    currMax = max(currMax, curr->val);
    int childMax = max(solve(curr->left, currMin, currMax), solve(curr->right, currMin, currMax));
    return max(o, childMax);
  }

  int maxAncestorDiff(TreeNode* root) {
    return solve(root, root->val, root->val);
  }
};