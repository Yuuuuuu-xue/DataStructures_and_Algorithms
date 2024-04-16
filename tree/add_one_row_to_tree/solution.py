
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
  def __init__(self, val=0, left=None, right=None):
    self.val = val
    self.left = left
    self.right = right

class Solution:
  def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
    # Base case, depth is 1
    if depth == 1:
      new_root =TreeNode(val=val, left=root)
      return new_root

    # BFS traverse and find out the nodes with target depth
    queue = []
    queue.append(root)
    curr_depth = 1

    while len(queue) > 0:
      next_queue = []

      if curr_depth + 1 == depth:
        break

      # BFS
      for node in queue:
        if node.left is not None:
          next_queue.append(node.left)
        if node.right is not None:
          next_queue.append(node.right)
      curr_depth += 1
      queue = next_queue

    # build the tree
    for node in queue:
      new_left = TreeNode(val, left=node.left)
      new_right = TreeNode(val, right=node.right)
      node.left = new_left
      node.right = new_right

    return root    
