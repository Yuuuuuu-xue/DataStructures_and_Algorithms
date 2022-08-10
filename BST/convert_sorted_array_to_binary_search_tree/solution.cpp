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
  TreeNode* buildBST(vector<int>& nums, int i, int j) {
    if (i <= j) {
      int mid = (i + j) / 2;
      return new TreeNode(nums[mid], buildBST(nums, i, mid - 1), buildBST(nums, mid + 1, j));
    }
    return nullptr;
  }
public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    return buildBST(nums, 0, nums.size() - 1);
  }
};