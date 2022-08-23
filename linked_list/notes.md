DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Structure of Linked  List](#structure-of-linked--list)
- [Linked List vs Array](#linked-list-vs-array)
- [Examples:](#examples)
    - [First Node of a Cycle in Linked List](#first-node-of-a-cycle-in-linked-list)
    - [Palindrome Linked List](#palindrome-linked-list)

## Structure of Linked  List
```
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

    def __str__(self):
        curr = self
        output = ''
        while curr is not None:
            output += f'{curr.val} '
            curr = curr.next
        
        # Remove the last space
        return output.rstrip()
```

## Linked List vs Array
Unlike array, if we want to get the $i^{th}$ element, we have to travel the head node one by one. It takes $\mathcal{O}(n)$ time on average to **visit an element by index**, where $n$ is the length of the list.

However, **insert** and **delete** operations at the beginning or middle of the list will be much faster.

## Examples:
#### [First Node of a Cycle in Linked List](linked_list_first_node_cycle/description.md)
#### [Palindrome Linked List](palindrome_linked_list/description.md)
