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
  struct Comparator {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
      // return True if smaller
      if (p1.first == p2.first) {
        return p1.second <= p2.second;
      } else {
        return p1.first <= p2.first;
      }
    }
  };

  vector<vector<int>> verticalTraversal(TreeNode* root) {
    unordered_map<int, vector<pair<int, int>>> m;
    queue<pair<TreeNode *, int>> q;
    vector<vector<int>> o;
    int minCol = 0;
    q.push(make_pair(root, 0));
    int k = 0;

    // BFS  
    while (!q.empty()) {
      int s = q.size();
      while (s--) {
        m[q.front().second].push_back(make_pair(k, q.front().first->val));
        if (q.front().first->left != nullptr) q.push(make_pair(q.front().first->left, q.front().second - 1));
        if (q.front().first->right != nullptr) q.push(make_pair(q.front().first->right, q.front().second + 1));
        minCol = min(minCol, q.front().second);
        q.pop();
      }
      k ++; 
    }

    // Build the output array
    while (m.find(minCol) != m.end()) {
      sort(m[minCol].begin(), m[minCol].end(), Comparator());
      vector<int> temp;
      for (auto& p : m[minCol]) temp.push_back(p.second);
      o.push_back(temp);
      minCol ++;
    }
    return o;
  }
};