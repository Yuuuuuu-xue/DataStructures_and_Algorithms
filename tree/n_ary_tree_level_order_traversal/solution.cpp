#include <bits/stdc++.h>

using namespace std;

/*
// Definition for a Node.
*/
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val) {
		val = _val;
	}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

class Solution {
public:
	vector<vector<int>> levelOrder(Node* root) {
    if (root == NULL) return {};
		queue<Node *> q;
		vector<vector<int>> o;
		q.push(root);
		while (!q.empty()) {
			int s = q.size();
			vector<int> levelNodes;
			while (s--) {
				levelNodes.push_back(q.front()->val);
				for (Node* &c : q.front()->children) {
					q.push(c);
				}
				q.pop();
			}
			o.push_back(levelNodes);
		}
		return o;
	}
};