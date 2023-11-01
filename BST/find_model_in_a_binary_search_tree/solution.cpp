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
  void inorder_traversal(TreeNode* curr, vector<int>& nodes) {
    if (curr != nullptr) {
      inorder_traversal(curr->left, nodes);

      nodes.push_back(curr->val);

      inorder_traversal(curr->right, nodes);
    }
  }

  vector<int> findMode(TreeNode* root) {
    vector<int> sortedValues;
    inorder_traversal(root, sortedValues);

    int currFreq = 0;
    int maxFreq = 0;
    vector<int> o = { sortedValues[0] };
    for (int i = 0; i < sortedValues.size(); i++) {   
      currFreq ++;
      if (currFreq > maxFreq) {
        maxFreq = currFreq;
        o.clear();
        o.push_back(sortedValues[i]);
      } else if (currFreq == maxFreq) {
        o.push_back(sortedValues[i]);
      }
  
      if (i < sortedValues.size() - 1 && sortedValues[i] != sortedValues[i + 1]) {
        currFreq = 0;
      }
    }

    return o;
  }
};