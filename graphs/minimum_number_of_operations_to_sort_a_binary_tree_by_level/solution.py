from typing import Optional
from collections import defaultdict

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def minimumOperations(self, root: Optional[TreeNode]) -> int:
        o = 0

        q = [root]

        while q:
            next_q = []

            node_values = []
            sorted_node_values = []
            node_to_i = defaultdict(int)

            for i, curr in enumerate(q):
                node_values.append(curr.val)
                sorted_node_values.append(curr.val)
                node_to_i[curr.val] = i

                if curr.left is not None:
                    next_q.append(curr.left)
                if curr.right is not None:
                    next_q.append(curr.right)
            
            sorted_node_values.sort()
            
            # Swap the elements
            for i in range(len(node_values)):
                if node_values[i] != sorted_node_values[i]:
                    # Swap
                    j = node_to_i[sorted_node_values[i]]
                    node_to_i[sorted_node_values[i]] = i
                    node_to_i[node_values[i]] = j
                    # print(node_values[i], node_values[j])
                    node_values[i], node_values[j] = node_values[j], node_values[i]
                    o += 1
            q = next_q
        return o


