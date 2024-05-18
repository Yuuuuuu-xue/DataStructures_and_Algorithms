from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def solve(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        left_coins = self.solve(root.left)
        right_coins = self.solve(root.right)

        self.num_steps += abs(left_coins) + abs(right_coins)

        return left_coins + right_coins + root.val - 1

    def distributeCoins(self, root: Optional[TreeNode]) -> int:
        self.num_steps = 0
        self.solve(root)
        return self.num_steps
