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
  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, unordered_map<int, int>& m, int preorderLeftI, int preorderRightI, int inorderLeftI, int inorderRightI) {
    if (preorderLeftI > preorderRightI || inorderLeftI > inorderRightI) return nullptr;
    return new TreeNode(
      preorder[preorderLeftI],
      buildTree(
        preorder, 
        inorder, 
        m,
        preorderLeftI + 1,
        preorderLeftI + 1 + m[preorder[preorderLeftI]] - inorderLeftI - 1,
        inorderLeftI,
        m[preorder[preorderLeftI]] - 1
      ),
      buildTree(
        preorder,
        inorder,
        m,
        preorderLeftI + 1 + m[preorder[preorderLeftI]] - inorderLeftI,
        preorderRightI,
        m[preorder[preorderLeftI]] + 1,
        inorderRightI
      )
    );
  }
public:
  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    // Preorder: root left right
    // Inorder: left root right
    unordered_map<int, int> m;
    for (int i = 0; i < inorder.size(); i++) m[inorder[i]] = i;
    return buildTree(preorder, inorder, m, 0, preorder.size() - 1, 0, inorder.size() - 1);
  }
};
