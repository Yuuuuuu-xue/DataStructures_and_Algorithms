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
  vector<vector<int>> verticalOrder(TreeNode* root) {
    unordered_map<int, vector<int>> m;
    int minCol = 0;
    queue<pair<TreeNode *, int>> q; 
    q.push(make_pair(root, 0));

    while (!q.empty()) {
      if (q.front().first != nullptr) {
        // Add curr node to the map
        m[q.front().second].push_back(q.front().first->val);
        // Update the minCol
        minCol = min(minCol, q.front().second);
        // For children
        q.push(make_pair(q.front().first->left, q.front().second - 1));
        q.push(make_pair(q.front().first->right, q.front().second + 1));
      }
      q.pop();
    }

    
    // Build the output array
    vector<vector<int>> o;
    while (m.find(minCol) != m.end()) o.push_back(m[minCol ++]);
    return o;
  }
};