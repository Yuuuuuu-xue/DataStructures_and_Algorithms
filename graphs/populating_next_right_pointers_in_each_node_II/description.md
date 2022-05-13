## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## Description
Given a binary tree
```
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
```
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to ```NULL```. Initially, all next pointers are set to ```NULL```.

## Example
```
Input:
    1
   / \
  2   3
 / \   \
4   5   7

Output:
       1(NULL)
      / \
   2(3)  3(NULL)
 /    \    \ 
4(5)  5(7)  7(NULL)
 ```

## Key Idea
Notice this is a BFS traverse, where we want to traverse the tree level by level so we can update the pointer to the next pointer.

Therefore, we will use two queues ```curr_queue``` and ```next_queue``` to solve this problem. For each element, pop a node from curr_queue and update its next pointer to the first node in the remaining curr_queue (null if that is empty) and push all its items in the next_queue (so a BFS traverse). When the curr_queue is empty, then let curr_queue = next_queue and next_queue points to an empty queue.

## Solution
- [Java Solution](populating_next_right_pointers_in_each_node_II.java)
