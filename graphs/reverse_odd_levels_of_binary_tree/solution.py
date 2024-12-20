from typing import Optional


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        q = [root]

        prev_level_nodes = []
        level = 0

        while q:
            next_q = []
            
            for item in q:
                next_q.append(item.left)
                next_q.append(item.right)

            if level % 2 == 0:
                prev_level_nodes = q
            else:
                # Need to swap
                for i in range(len(q)):
                    prev_level_nodes[i].left = next_q[-2 * i - 1]
                    prev_level_nodes[i].right = next_q[-2 * i - 2]
            
            level += 1
            q = next_q

        return root

