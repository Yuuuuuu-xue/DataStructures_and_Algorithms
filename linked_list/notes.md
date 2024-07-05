DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Structure of Linked  List](#structure-of-linked--list)
- [Linked List vs Array](#linked-list-vs-array)
- [Examples:](#examples)
    - [First Node of a Cycle in Linked List](#first-node-of-a-cycle-in-linked-list)
    - [Palindrome Linked List](#palindrome-linked-list)
    - [Partition List](#partition-list)
    - [Split Linked List in Parts3](#split-linked-list-in-parts3)
    - [Reverse Linked List II](#reverse-linked-list-ii)
    - [Middle of the Linked List](#middle-of-the-linked-list)
    - [Merge in Between Linked Lists](#merge-in-between-linked-lists)

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
#### [Partition List](./partition_list/description.md)
#### [Split Linked List in Parts](./split_linked_list_in_parts/description.md)3
#### [Reverse Linked List II](./reverse_linked_list_II/description.md)
#### [Middle of the Linked List](./middle_of_the_linked_list/description.md)
#### [Merge in Between Linked Lists](./merge_in_between_linked_list/description.md)
#### [Delete Node in a Linked List](./delete_node_in_a_linked_list/description.md)
#### [Double a Number Represented as a Linked List](./double_a_number_represented_as_a_linked_list/description.md)
#### [Merge Nodes in Between Zeros](./merge_nodes_in_between_zeros/description.md)