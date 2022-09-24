#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.\
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
  void dfs(TreeNode *curr, vector<int>& currPath, int currSum, int targetSum, vector<vector<int>>& o) {
    currPath.push_back(curr->val);
    currSum += curr->val;
    if (curr->left == nullptr && curr->right == nullptr) {
      if (currSum == targetSum) {
        o.push_back(currPath);
      }
    } else {
      if (curr->left != nullptr) {
        dfs(curr->left, currPath, currSum, targetSum, o);
      }
      if (curr->right != nullptr) {
        dfs(curr->right, currPath, currSum, targetSum, o);
      }
    }
    // Backtrack
    currPath.pop_back();
    currSum -= curr->val;
  }

public:
  vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    if (root == nullptr) return {};
    vector<int> currPath;
    vector<vector<int>> o;
    dfs(root, currPath, 0, targetSum, o);
    return o;
  }
};