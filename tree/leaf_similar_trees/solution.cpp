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
  void collect(TreeNode* curr, vector<int>& lst) {
    if (curr != nullptr) {
      collect(curr->left, lst);
      if (curr->left == nullptr && curr->right == nullptr) {
        lst.push_back(curr->val);
      }
      collect(curr->right, lst);
    } 
  }

  bool solve(TreeNode* curr, vector<int>& nodeLst, int& i) {
    if (curr != nullptr) {
      if (!solve(curr->left, nodeLst, i)) {
        return false;
      }
      if (curr->left == nullptr && curr->right == nullptr) {
        if (i >= nodeLst.size()) {
          return false;
        }
        if (curr->val != nodeLst[i]) {
          return false;
        }
        i += 1;
      }
      
      return solve(curr->right, nodeLst, i);
    }
    return true;
  }
  
  bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> lst;
    collect(root1, lst);
    int i = 0;
    bool o = solve(root2, lst, i);
    if (i != lst.size()) {
      return false;
    }
    return o;
  }
};