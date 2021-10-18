## Linked List
Click [here](../notes.md) to go back to the notes page.

## Question
Given a linked list, return the node where the cycle begins. If there is no cycle, return None. **Do not modify the list**.

## A Simple Solution
We can simply use a hashset to store all the visited values.
```
def detect_cycle(self, head: ListNode):
    s = set()
    while head is not None:
        if head in s:
            return head
        else:
            s.add(head)
        head = head.next
    return None
```
The runtime complexity of this solution is $\mathcal{O}(n)$ but we also use $\mathcal{O}(n)$ space. So is there any solution with $\mathcal{O}(1)$ space while not affecting the runtime complexity?

## Floyd's Algorithm (Two Pointers)
We will have two pointers, slow pointer moves at **one** step at a time and fast pointer moves **two** steps at a time. If they do not meet (fast pointer reaches the end), then there will be no cycle and return None.

IF they meet at some point. Set the slow pointer back to the beginning and move at one step and fast pointer stays at there and continues to move, but one step as well. Once they meet, we find the node in the beginning of the cycle. 

## Complexity Analysis
- **Runtime complexity**: $\mathcal{O}(n)$
- **Space complexity**: $\mathcal{O}(1)$

## Solution
- [Python Solution](linked_list_first_node_cycle.py)
