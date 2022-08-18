#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
  TreeNode* leftMostChild(TreeNode* curr) {
    if (curr == NULL) return curr;
    if (curr->left != NULL) return leftMostChild(curr->left);
    return curr;
  }

  TreeNode* traverse(TreeNode* curr, TreeNode* prev, int p) {
    if (curr->val == p) {
      TreeNode *temp = leftMostChild(curr->right);
      if (temp != NULL) {
        return temp;
      } else {
        return prev;
      }
    }
    else if (curr->val < p) return traverse(curr->right, prev, p);
    else return traverse(curr->left, curr, p);
  }

public:
  TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
    return traverse(root, NULL, p->val);
  }
};