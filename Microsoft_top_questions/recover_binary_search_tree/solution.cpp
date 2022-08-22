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
  TreeNode* swapNode1 = nullptr;
  TreeNode* swapNode2 = nullptr;
  TreeNode* prevNode = nullptr;

  void traverseInorder(TreeNode *curr) {
    if (curr == nullptr) return;
    traverseInorder(curr->left);
    if (prevNode != nullptr) {
      if (curr->val < prevNode->val) {
        // First swap point
        if (swapNode1 == nullptr) {
          swapNode1 = prevNode;
          swapNode2 = curr;
        } else {
          // Second swap point, should stop
          swapNode2 = curr;
          return;
        }
      }
    }
    prevNode = curr;
    traverseInorder(curr->right);
  }

public:
  void recoverTree(TreeNode* root) {
    traverseInorder(root);
    int temp = swapNode1->val;
    swapNode1->val = swapNode2->val;
    swapNode2->val = temp;
  }
};