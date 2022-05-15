import java.util.LinkedList;
import java.util.Queue;

// Definition for a binary tree node.
class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode() {}
  TreeNode(int val) { this.val = val; }
  TreeNode(int val, TreeNode left, TreeNode right) {
    this.val = val;
    this.left = left;
    this.right = right;
  }
}


class Solution {
  public int deepestLeavesSum(TreeNode root) {
    Queue<TreeNode> q = new LinkedList<>();
    q.add(root);
    int o = 0;
    while(!q.isEmpty()) {
      o = 0;
      System.out.println(q);
      int s = q.size();
      for (int i = 0; i < s; i ++) {
        TreeNode t = q.remove();
        if (t.left != null) {
          q.add(t.left);
        }
        if (t.right != null) {
          q.add(t.right);
        }
        o += t.val;
      }
    }
    return o;
  }
}