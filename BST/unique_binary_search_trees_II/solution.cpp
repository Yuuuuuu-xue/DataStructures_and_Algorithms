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

struct pair_hash {
    template <class T1, class T2>
    size_t operator () (const pair<T1,T2> &p) const {
      auto h1 = hash<T1>{}(p.first);
      auto h2 = hash<T2>{}(p.second);
      return h1 ^ h2;  
    }
};

class Solution {
private:
  unordered_map<pair<int, int>, vector<TreeNode *>, pair_hash> dp;

public:

  vector<TreeNode*> helper(int i, int j) {
    vector<TreeNode *> nodes;
    // Base case
    if (i > j) {
      nodes.push_back(nullptr);
      return nodes;
    }

    // Hit the cached value
    auto key = make_pair(i, j);
    auto cachedNodes = dp.find(key);
    if (cachedNodes != dp.end()) {
      return cachedNodes->second;
    }

    // For i <= x <= j, left nodes = i <= ... <= x - 1 and right nodes = x + 1 <= ... <= n
    for (int x = i; x <= j; x++) {
      for (TreeNode* leftNode : helper(i, x - 1)) {
        for (TreeNode* rightNode : helper(x + 1, j)) {
          TreeNode* node = new TreeNode(x, leftNode, rightNode);
          nodes.push_back(node);
        }
      }
    }

    // Save in the cache
    dp[key] = nodes;
    return nodes;
  }

  vector<TreeNode*> generateTrees(int n) {
    return helper(1, n);
  }
};