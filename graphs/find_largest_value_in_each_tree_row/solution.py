from typing import Optional, List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:
        o = []
        
        if not root:
            return o

        q = [root]

        while q:
            largest_value = float('-inf')

            next_q = []

            for item in q:
                largest_value = max(largest_value, item.val)

                if item.left is not None:
                    next_q.append(item.left)
                if item.right is not None:
                    next_q.append(item.right)
            
            o.append(largest_value)
            q = next_q
        
        return o
