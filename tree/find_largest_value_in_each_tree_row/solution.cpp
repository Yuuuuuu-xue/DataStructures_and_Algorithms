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
  void solve(TreeNode* curr, int currLevel, unordered_map<int, int>& m) {
    if (curr != nullptr) {
      if (m.find(currLevel) == m.end()) {
        m[currLevel] = curr->val;
      } else {
        m[currLevel] = max(m[currLevel], curr->val);
      }
      solve(curr->left, currLevel + 1, m);
      solve(curr->right, currLevel + 1, m);
    }
  }

  vector<int> largestValues(TreeNode* root) {
    unordered_map<int, int> m;
    solve(root, 0, m);
    
    vector<int> o;
    int i = 0;
    while(m.find(i) != m.end()) {
      o.push_back(m[i]);
      i++;
    }
    return o;
  }
};