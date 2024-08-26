"""
# Definition for a Node.
"""
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children


class Solution:
    def traverse(self, curr):
        if not curr:
            return
        for node in curr.children:
            self.traverse(node)
        self.nodes.append(curr.val)

    def postorder(self, root: 'Node') -> List[int]:
        self.nodes = []
        self.traverse(root)
        return self.nodes
