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
  vector<int> rightSideView(TreeNode* root) {
    vector<int> o;
    if (root == nullptr) return o;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
      int s = q.size();
      while (s-- > 0) {
        if (q.front()->left != nullptr) q.push(q.front()->left);
        if (q.front()->right != nullptr) q.push(q.front()->right);
        // Last element
        if (s == 0) {
          o.push_back(q.front()->val);
        }
        q.pop();
      }
    }
    return o;
  }
};
