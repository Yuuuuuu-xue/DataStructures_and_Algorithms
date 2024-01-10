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
  void buildGraph(TreeNode* curr, unordered_map<int, unordered_set<int>>& graph) {
    if (curr != nullptr) {
      if (curr->left != nullptr) {
        if (graph.find(curr->val) == graph.end()) {
          graph[curr->val] = { curr->left->val };
        } else {
          graph[curr->val].insert(curr->left->val);
        }

        if (graph.find(curr->left->val) == graph.end()) {
          graph[curr->left->val] = { curr->val };
        } else {
          graph[curr->left->val].insert(curr->val);
        }

        buildGraph(curr->left, graph);
      }

      if (curr->right != nullptr) {
        if (graph.find(curr->val) == graph.end()) {
          graph[curr->val] = { curr->right->val };
        } else {
          graph[curr->val].insert(curr->right->val);
        }

        if (graph.find(curr->right->val) == graph.end()) {
          graph[curr->right->val] = { curr->val };
        } else {
          graph[curr->right->val].insert(curr->val);
        }

        buildGraph(curr->right, graph);
      }
    }
  }

  int amountOfTime(TreeNode* root, int start) {
    unordered_map<int, unordered_set<int>> graph;
    buildGraph(root, graph);

    unordered_set<int> seen;
    seen.insert(start);
    vector<int> q;
    q.push_back(start);
    int o = 0;
    while (!q.empty()) {
      vector<int> nextQ;
      
      for (int node : q) {
        if (graph.find(node) != graph.end()) {
          for (int neighbor : graph[node]) {
            if (seen.find(neighbor) == seen.end()) {
              seen.insert(neighbor);
              nextQ.push_back(neighbor);
            }
          }
        }
      }

      q = nextQ;
      o ++;
    }

    return o - 1;
  }
};