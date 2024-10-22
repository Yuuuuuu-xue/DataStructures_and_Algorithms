from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        if root is None:
            return -1
        
        level_sum = []

        q = [root]

        while q:
            next_q = []
            curr_sum = 0
            for item in q:
                curr_sum += item.val
                if item.left is not None:
                    next_q.append(item.left)
                if item.right is not None:
                    next_q.append(item.right)
            level_sum.append(curr_sum)
            q = next_q
        
        level_sum.sort(reverse=True)
        if len(level_sum) < k:
            return -1
        return level_sum[k - 1]