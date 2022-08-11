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

class Codec {
public:
  // Encodes a tree to a single string.
  string serialize(TreeNode* root) {
    queue<TreeNode *>q;
    q.push(root);
    string serializedData;
    while (!q.empty()) {
      if (q.front() != NULL) {
        serializedData += to_string(q.front()->val) + " ";
        // Neighbors
        q.push(q.front()->left);
        q.push(q.front()->right);
      } else {
        serializedData += "null ";
      }
      q.pop();
    }
    // Remove the last space
    serializedData.pop_back();
    return serializedData;
  }

  // Decodes your encoded data to tree.
  TreeNode* deserialize(string data) {
    stringstream dataStream(data);
    string dataStr;
    queue<TreeNode *> q;
    TreeNode *root = NULL;
    while (getline(dataStream, dataStr, ' ')) {
      // For the first node
      if (q.empty()) {
        root = dataStr == "null" ? NULL : new TreeNode(stoi(dataStr));
        q.push(root);
      } else {
        // Process the left subtree
        if (dataStr != "null") {
          q.front()->left = new TreeNode(stoi(dataStr));
          q.push(q.front()->left);
        }
        // Process the right subtree
        getline(dataStream, dataStr, ' ');
        if (dataStr != "null") {
          q.front()->right = new TreeNode(stoi(dataStr));
          q.push(q.front()->right);
        }
        q.pop();
      }
    }
    return root;
  }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));