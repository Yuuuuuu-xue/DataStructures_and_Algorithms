from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def solve(self, inorder_left, inorder_right, postorder_left, postorder_right):
        print(inorder_left, inorder_right, postorder_left, postorder_right)
        # If valid node
        if postorder_right < postorder_left or inorder_right < inorder_left:
            return None
        
        # postorder: left - right - root, last node must be root
        curr_root_val = self.postorder[postorder_right]
        curr_root = TreeNode(curr_root_val)

        # inorder: left root right, hence we need to find the root
        inorder_root_i = self.inorder_map[curr_root_val]
        # [inorder_left, inorder_root_i - 1] will be left nodes for inorder traversal
        # we know the last left node is at index inorder_left

        num_left_nodes = inorder_root_i - 1 - inorder_left + 1

        # then it will be the last node in postorder
        curr_root.left = self.solve(inorder_left, inorder_root_i - 1, postorder_left, postorder_left + num_left_nodes - 1)

        # [inorder_root_i + 1, inorder_right] will be right nodes for inorder traversal
        # [last_left_node_postorder_i + 1, postorder_right - 1] will be right nodes for postorder traversal
        curr_root.right = self.solve(inorder_root_i + 1, inorder_right, postorder_left + num_left_nodes, postorder_right - 1)

        return curr_root

    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        self.inorder_map = {}
        self.postorder_map = {}
        for i in range(len(inorder)):
            self.inorder_map[inorder[i]] = i
            self.postorder_map[postorder[i]] = i
        self.inorder = inorder
        self.postorder = postorder

        return self.solve(0, len(inorder) - 1, 0, len(postorder) - 1)
