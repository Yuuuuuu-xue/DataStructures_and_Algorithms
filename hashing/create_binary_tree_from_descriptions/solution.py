from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def createBinaryTree(self, descriptions: List[List[int]]) -> Optional[TreeNode]:
        val_to_node = {}
        nodes_with_parent = set()

        for parent, child, is_left in descriptions:
            if child not in val_to_node:
                val_to_node[child] = TreeNode(child)
        
            if parent not in val_to_node:
                val_to_node[parent] = TreeNode(parent)

            if is_left:
                val_to_node[parent].left = val_to_node[child]
            else:
                val_to_node[parent].right = val_to_node[child]

            nodes_with_parent.add(child)
        
        for node_val in val_to_node:
            if node_val not in nodes_with_parent:
                return val_to_node[node_val]
        return None
