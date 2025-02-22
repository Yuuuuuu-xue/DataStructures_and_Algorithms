from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:    
    def recoverFromPreorder(self, traversal: str) -> Optional[TreeNode]:
        nodes = []

        i = 0
        while i < len(traversal):
            num_dashes = 0

            while i < len(traversal) and traversal[i] == '-':
                i += 1
                num_dashes += 1
            
            # We see a number, need to traverse until we find all digits
            j = i
            while j < len(traversal) and traversal[j] != '-':
                j += 1
            
            # At j we either reach to - or reach to the end
            num = int(traversal[i:j])
            nodes.append((num, num_dashes))
            i = j
        
        # We have the nodes array, start building the tree
        stack = []

        for num, num_dashes in nodes:
            # Construct the node
            curr = TreeNode(num)

            # Keep pop stack until we find the root of the curr node
            while stack and stack[-1][1] + 1 != num_dashes:
                stack.pop()

            if not stack:
                stack.append((curr, num_dashes))
                continue
            
            # It's the child, assign to left/right
            if stack[-1][0].left is None:
                stack[-1][0].left = curr
            else:
                stack[-1][0].right = curr
            stack.append((curr, num_dashes))

        if not stack:
            return None
        return stack[0][0]
