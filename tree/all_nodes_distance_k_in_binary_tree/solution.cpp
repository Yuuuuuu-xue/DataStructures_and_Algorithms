#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
  void buildGraph(TreeNode* root, unordered_map<int, vector<int>>&m) {
    if (root != NULL) {
      if (root->left != NULL) {
        m[root->val].push_back(root->left->val);
        m[root->left->val].push_back(root->val);
        buildGraph(root->left, m);
      }
      if (root->right != NULL) {
        m[root->val].push_back(root->right->val);
        m[root->right->val].push_back(root->val);
        buildGraph(root->right, m);
      }
    }
  }
    
public:
  vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    // Build the map for any nodes that are not children of target node
    unordered_map<int, vector<int>> m;
    buildGraph(root, m);
    queue<int> q;
    int currDist = 0;
    q.push(target->val);
    unordered_set<int> seen;
    seen.insert(target->val);
    // BFS
    while (!q.empty() && currDist < k) {
      int s = q.size();
      for (int i = 0; i < s; i++) {
        for (int j = 0; j < m[q.front()].size(); j++) {
          if (seen.find(m[q.front()][j]) == seen.end()) {
            seen.insert(m[q.front()][j]);
            q.push(m[q.front()][j]);
          }
        }
        q.pop();
      }
      currDist ++;
    }
    
    // currDist is now same as k, we build the output array 
    vector<int> o;
    while(!q.empty()) {
      o.push_back(q.front());
      q.pop();
    }
    return o;
  }
};