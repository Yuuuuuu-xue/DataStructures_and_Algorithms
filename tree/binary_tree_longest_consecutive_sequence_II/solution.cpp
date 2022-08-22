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
  pair<int, int> traverseTree(TreeNode* curr, int *o) {
    if (curr == nullptr) return {0, 0};
    pair<int, int> left = traverseTree(curr->left, o);
    pair<int, int> right = traverseTree(curr->right, o);
    *o = max({*o, left.first, left.second, right.first, right.second});

    pair<int, int> returnPair = {1, 1};
    
    if (curr->left != nullptr) {
      if (curr->left->val + 1 == curr->val) {
        // left + root
        returnPair.second = max(returnPair.second, 1 + left.second);
      } else if (curr->val + 1 == curr->left->val) {
        // root + left
        returnPair.first = max(returnPair.first, 1 + left.first);
      }
    }

    if (curr->right != nullptr) {
      if (curr->right->val + 1 == curr->val) {
        // right + root
        returnPair.second = max(returnPair.second, 1 + right.second);
      } else if (curr->val + 1 == curr->right->val) {
        // root + right
        returnPair.first = max(returnPair.first, 1 + right.first);
      }
    }

    if (curr->left != nullptr && curr->right != nullptr) {
      if (curr->left->val + 1 == curr->val && curr->val + 1 == curr->right->val) {
        // left - root - right
        *o = max(*o, left.second + 1 + right.first);
      } else if (curr->right->val + 1 == curr->val && curr->val + 1 == curr->left->val) {
        // right - root - left
        *o = max(*o, right.second + 1 + left.first);
      }
    }
    return returnPair;
  }

public:
  int longestConsecutive(TreeNode* root) {
    int o = 0;
    pair<int, int> t = traverseTree(root, &o);
    return max({o, t.first, t.second});  
  }
};