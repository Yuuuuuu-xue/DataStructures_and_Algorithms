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
  int traverseTree(TreeNode *curr, int currDepth, int *maxD) {
    if (curr == nullptr) return currDepth - 1;
    int leftDepth = traverseTree(curr->left, currDepth + 1, maxD);
    int rightDepth = traverseTree(curr->right, currDepth + 1, maxD);
    // Update the sum
    *maxD = max(*maxD, leftDepth + rightDepth - 2 * currDepth);
    return max(leftDepth, rightDepth);
  }

public:
  int diameterOfBinaryTree(TreeNode* root) {
    int maxD = 0;
    traverseTree(root, 1, &maxD);
    return maxD;
  }
};

