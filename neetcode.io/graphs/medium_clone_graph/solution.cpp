#include <bits/stdc++.h>


using namespace std;

// Definition for a Node.
class Node {
public:
  int val;
  vector<Node*> neighbors;
  Node() {
    val = 0;
    neighbors = vector<Node*>();
  }
  Node(int _val) {
    val = _val;
    neighbors = vector<Node*>();
  }
  Node(int _val, vector<Node*> _neighbors) {
    val = _val;
    neighbors = _neighbors;
  }
};


class Solution {
public:
  Node* cloneGraph(Node* node) {
    if (node == nullptr) {
      return nullptr;
    }
    unordered_map<int, Node *> m;
    deque<Node *> q;
    q.push_back(node);
    Node *cloneCurr = new Node(node->val);
    m[node->val] = cloneCurr;
    while (q.size() > 0) {
      Node *curr = q.front();
      q.pop_front();
      
      // Loop over its neighbor
      for(Node* next : curr->neighbors) {
        // Create a clone node if necessary
        if (m.find(next->val) == m.end()) {
          Node *cloneNext = new Node(next->val);
          m[next->val] = cloneNext;
          // Not visited node, push to the queue
          q.push_back(next);
        }

        // Connect to its neighbor
        m[curr->val]->neighbors.push_back(m[next->val]);
      }
    }
    return cloneCurr;
  }
};
