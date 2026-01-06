from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        q = [root]

        max_sum = float('-inf')
        o = 0
        level = 1

        while q:
            next_q = []
            curr_sum = 0
            for node in q:
                curr_sum += node.val

                if node.left:
                    next_q.append(node.left)
                if node.right:
                    next_q.append(node.right)
            
            if curr_sum > max_sum:
                max_sum = curr_sum
                o = level
            
            level += 1
            q = next_q 
        return o
