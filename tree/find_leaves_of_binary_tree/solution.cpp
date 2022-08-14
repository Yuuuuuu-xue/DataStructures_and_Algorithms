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
  int traverseTree(TreeNode* curr, unordered_map<int, vector<int>> &m) {
    if (curr == nullptr) return -1;
    // Get the maximum distance
    int currDistance = max(traverseTree(curr->left, m), traverseTree(curr->right, m)) + 1;
    m[currDistance].push_back(curr->val);
    return currDistance;
  }

public:
  vector<vector<int>> findLeaves(TreeNode* root) {
    unordered_map<int, vector<int>> m;
    int rootDistance = traverseTree(root, m);
    vector<vector<int>> o;
    for (int i = 0; i <= rootDistance; i++) o.push_back(m[i]);
    return o;
  }
};