from typing import *
from collections import deque


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def levelOrder(root: TreeNode) -> List[List[int]]:
    # Base Case
    if not root:
        return []

    output = []
    queue = deque([root])
    while queue:
        # All nodes in the current level
        level = []

        # Loop over the all the items in the current queue
        for _ in range(len(queue)):
            node = queue.popleft()
            level.append(node.val)

            # BFS, append its neighbour
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)

        output.append(level)
    return output


if __name__ == '__main__':
    test_tree = TreeNode(3)
    test_tree.left = TreeNode(9)
    test_tree.right = TreeNode(20)
    test_tree.right.left = TreeNode(15)
    test_tree.right.right = TreeNode(7)

    print([[3], [9, 20], [15, 7]] == levelOrder(test_tree))


