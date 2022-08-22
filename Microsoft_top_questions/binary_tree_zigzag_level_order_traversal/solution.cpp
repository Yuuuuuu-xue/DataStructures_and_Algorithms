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
};

class Solution {
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> o;
    if (root == nullptr) return o;
    queue<TreeNode *> q;
    q.push(root);
    int currDepth = 0;
    
    while(!q.empty()) {
      int s = q.size();
      vector<int> temp;
      while (s--) {
        temp.push_back(q.front()->val);
        if (q.front()->left != nullptr) q.push(q.front()->left);
        if (q.front()->right != nullptr) q.push(q.front()->right);
        q.pop();
      }
      
      if (currDepth % 2 != 0) {
        reverse(temp.begin(), temp.end());
      }
      o.push_back(temp);
      currDepth ++;
    }
    return o;
  }
};