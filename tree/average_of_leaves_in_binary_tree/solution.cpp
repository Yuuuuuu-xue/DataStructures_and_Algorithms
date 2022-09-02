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
	reeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	vector<double> averageOfLevels(TreeNode* root) {
		vector<double> o;
		queue<TreeNode *> q;
		q.push(root);
		while (!q.empty()) {
			int s = q.size();
            int i = 0;
			long long sum = 0;
			while (i++ < s) {
				sum += q.front()->val;
				if (q.front()->left != nullptr) q.push(q.front()->left);
				if (q.front()->right != nullptr) q.push(q.front()->right);
				q.pop();
			}
            cout << sum << "\n";
			o.push_back((double)sum / s);
		}
		return o;
	}
};