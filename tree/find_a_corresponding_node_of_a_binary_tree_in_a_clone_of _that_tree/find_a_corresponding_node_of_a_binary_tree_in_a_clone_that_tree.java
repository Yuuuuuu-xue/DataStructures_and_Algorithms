class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;
  TreeNode(int x) {
    val = x;
  }
}

class Solution {
  public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
    if (original.val == target.val) {
      return cloned;
    }
    if (original.left != null) {
      final TreeNode left = this.getTargetCopy(original.left, cloned.left, target);
      if (left != null) {
        return left;
      }
    }
    if (original.right != null) {
      final TreeNode right = this.getTargetCopy(original.right, cloned.right, target);
      if (right != null) {
        return right;
      }
    }
    return null;
  }
}