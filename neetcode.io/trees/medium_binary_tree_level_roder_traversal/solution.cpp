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
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> o;
    if (root == nullptr) return o;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
      int s = q.size();
      vector<int> levelList;
      for (int i = 0; i < s; i++) {
        levelList.push_back(q.front()->val);
        // left
        if (q.front()->left != nullptr) q.push(q.front()->left);
        // right
        if (q.front()->right != nullptr) q.push(q.front()->right);
        q.pop();
      }
      o.push_back(levelList);
    }
    return o;
  }
};
