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
  bool isValidBST(TreeNode* curr, int* currMin, int* currMax) {
    if (curr == nullptr) return true;

    int leftMin;
    int leftMax;

    int rightMin;
    int rightMax;

    *currMin = curr->val;
    *currMax = curr->val;

    // If we have a left subtree
    if (curr->left) {
      bool left = isValidBST(curr->left, &leftMin, &leftMax);
      if (!left) return false;
      if (leftMax >= curr->val) return false;
      *currMin = min(*currMin, leftMin);
    }
    // If we have a right subtree
    if (curr->right) {
      bool right = isValidBST(curr->right, &rightMin, &rightMax);
      if (!right) return false;
      if (rightMin <= curr->val) return false;
      *currMax = max(*currMax, rightMax);
    }
    
    return true;
  }


public:
  bool isValidBST(TreeNode* root) {
    int dummyMin;
    int dummyMax;
    return isValidBST(root, &dummyMin, &dummyMax);
  }
};