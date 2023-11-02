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
  // Return sum, n
  pair<int, int> solve(TreeNode* curr, int& numNodes) {
    if (curr == nullptr) {
      return make_pair(0, 0);
    }

    pair<int, int> leftP = solve(curr->left, numNodes);
    pair<int, int> rightP = solve(curr->right, numNodes);

    int sum = leftP.first + rightP.first + curr->val;
    int n = leftP.second + rightP.second + 1;
    if (curr->val == sum / n) {
      numNodes ++;
    }
    return make_pair(sum, n);
  }
  
  int averageOfSubtree(TreeNode* root) {
    int numNodes = 0;
    solve(root, numNodes);
    return numNodes;
  }
};