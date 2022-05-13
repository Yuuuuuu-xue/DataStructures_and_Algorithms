package graphs.populating_next_right_pointers_in_each_node_II;
import java.util.LinkedList;
import java.util.Queue;

// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};


class Solution {
  public Node connect(Node root) {
    if (root == null) {
      return root;
    }
    Queue<Node> curr_queue = new LinkedList<>();
    Queue<Node> next_queue = new LinkedList<>();
    curr_queue.add(root);
    while (!curr_queue.isEmpty() || !next_queue.isEmpty()) {
      if (curr_queue.isEmpty()) {
        curr_queue = next_queue;
        next_queue = new LinkedList<>();
      }
      Node curr_node = curr_queue.remove();
      curr_node.next = curr_queue.peek();
      if (curr_node.left != null) {
        next_queue.add(curr_node.left);
      }
      if (curr_node.right != null) {
        next_queue.add(curr_node.right);
      }
    }
    return root;
  }
}

