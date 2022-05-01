DataStructures_and_Algorithms

Notes from CSC236, 263, 373 and also the LeetCode journey!

Table of Contents:
- [Abstract Data Type and Data Structure](#abstract-data-type-and-data-structure)
- [Runtime Notation](#runtime-notation)
- [Divide and Conquer](#divide-and-conquer)
- [Tree](#tree)
- [Priority Queue](#priority-queue)
- [Hashing](#hashing)
- [Sorting Algorithms](#sorting-algorithms)
- [Stack](#stack)
- [Graphs](#graphs)
- [Minimum Spanning Tree](#minimum-spanning-tree)
- [Disjoint Set](#disjoint-set)
- [Greedy Algorithm](#greedy-algorithm)
- [Dynamic Programming](#dynamic-programming)
- [Shorest Weight Path (Dijkstra Algorithm)](#shorest-weight-path-dijkstra-algorithm)
- [Bitmask and Bit Manipulation](#bitmask-and-bit-manipulation)
- [Fenwick Tree (Binary Indexed Tree)](#fenwick-tree-binary-indexed-tree)
- [Trie](#trie)
- [Linked List](#linked-list)
- [Array](#array)

## Abstract Data Type and Data Structure
- **Abstract Data Type**: is the set of objects together with operations.
  - i.e. Stack, Queue, Priority Queue
- **Data Structure**: is the implementation of an ADT.
  - i.e. We can use List or LinkedList to implement Queue

## Runtime Notation
- **Big O**: upper bound, worst case, argue that algorithm executes no more than c * g(n) steps **on every input** of size n.
- **Big Omega**: lower bound, best case, find **one** input on which algorithm executes at least c * g(n) steps.

## Divide and Conquer
- [Notes](./divide_and_conquer/notes.md)
- Examples:
    - [Merge Sort](./divide_and_conquer/merge_sort/description.md)
    - [Find Smallest Not Belong To List](./divide_and_conquer/find_smallest_not_belong/description.md)
    - [Binary Search](./divide_and_conquer/binary_search/description.md)
    - [Bisect Left](./divide_and_conquer/bisect_left/description.md)
    - [Bisect Right](./divide_and_conquer/bisect_right/description.md)
    - [Find Peak Element](./divide_and_conquer/find_peak_element/description.md)
  
## Tree
- [General Notes](./tree/notes.md)
- Examples:
  - [Is Balanced Binary Tree](./tree/is_balanced_binary_tree/description.md)
  - [Binary Tree Level Order Traversal](./tree/binary_tree_level_order_traversal/description.md)
  - [BST to Balanced BST](./tree/bst_to_balance_bst/description.md)
- [Binary Search Tree Notes](./BST/notes.md) \
  Examples:
  - [Implementation](BST/implementation/description.md)
  - [Sorted Linked List to Balanced BST](BST/sorted_linked_list_to_balanced_bst/description.md)
- [AVL](./AVL/notes.md) \
  Examples:
  - [Implementation](AVL/implementation/description.md)

## Priority Queue
- [Notes](./priority_queue/notes.md)
- Examples:
  - [Heap Implementation](./priority_queue/implmentation_heap/description.md)
  - [Heap Sort](./priority_queue/heap_sort/description.md)
  - [O(n) Build Heap](./priority_queue/build_heap/description.md)
  - [Min Heap with Decrease Key](./priority_queue/min_heap_with_decrease_key/description.md)

## Hashing
- [Notes](./hashing/notes.md)
- Examples:
  - [Group Anagrams](hashing/group_anagrams/description.md)
  - [Four Sum II](hashing/four_sum_II/description.md)
  - [Diagonal Traverse](hashing/diagonal_traverse/description.md)

## Sorting Algorithms
- [Notes](./sorting/notes.md)
- Examples:
  - [Merge Sort](./sorting/merge_sort/description.md)
  - [Quick Sort](./sorting/quick_sort/description.md)

## Stack
- [Notes](./stack/notes.md)
- Examples:
  - [Backspace String Compare](./stack/backspace_string_compare/description.md)

## Graphs
- [Notes](./graphs/notes.md)
- Examples:
  - [Is Bilateral (BFS)](./graphs/is_bilateral/description.md)
  - [Jump Game IV (BFS)](./graphs/jump_game_IV/description.md)
  - [Schedule Course (DFS detects cycle)](./graphs/course_schedule/description.md)

## Minimum Spanning Tree
- [Notes](./minimum_spanning_tree/notes.md)
- Examples:
  - [Prim Algorithm](./minimum_spanning_tree/prim_algorithm/description.md)
  - [Kruskal Algorithm](./minimum_spanning_tree/kruskal_algorithm/description.md)

## Disjoint Set
- [Notes](./disjoint_set/notes.md)
- Examples:
  - [Disjoint Set with Path Compression by Rank Implementation](disjoint_set/implementation/description.md)

## Greedy Algorithm
- [Notes](./greedy/notes.md)
- Examples:
  - [Scheduling Intervals](greedy/interval_scheduling/description.md)
  - [Interval Partitioning](greedy/interval_partitioning/description.md)
  - [Schedule Course III (Greedy Algorithm with max heap)](./greedy/course_schedule_III/description.md)

## Dynamic Programming
- [Notes](./dynamic_programming/notes.md)
- Examples:
  - [Rod Cutting](dynamic_programming/rod_cutting/description.md)
  - [Subset Sum](dynamic_programming/subset_sum/description.md)
  - [Longest Palindromic Substring](dynamic_programming/longest_palindromic_substring/description.md)
  - [Edit Distance](dynamic_programming/edit_distance/description.md)
  - [Course Schedule IV FloydWarshall](dynamic_programming/course_schedule_IV/description.md)

## Shorest Weight Path (Dijkstra Algorithm)
- [Notes](./shorest_weight_path/notes.md)
- Examples:
  - [Dijkstra Algorithm Implementation](./shorest_weight_path/dijkstra_algorithm/description.md)

## Bitmask and Bit Manipulation
- [Notes](./bitmask_and_bit_manipulation/notes.md)
- Examples:
  - [Single Number (XOR)](bitmask_and_bit_manipulation/single_number/description.md)
  - [Maximum Product of Word Lengths (Bitmaks)](bitmask_and_bit_manipulation/maximum_product_of_word_lengths/description.md)

## Fenwick Tree (Binary Indexed Tree)
- [Notes](./fenwick_tree/notes.md)
- Examples:
  - [BIT Implementation](fenwick_tree/BIT_implementation/description.md)

## Trie
- [Notes](./trie/notes.md)
- Examples:
  - [Trie Implementation](trie/trie_implementation/description.md)

## Linked List 
- [Notes](./linked_list/notes.md)
- Example:
  - [First Node of a Cycle in Linked List](./linked_list/linked_list_first_node_cycle/description.md)

## Array
- Examples:
  - [Maximum Product Subarray](array/maximum_product_subarray/description.md)
  - [Three Sum Equal To 0](array/3_sum_equal_to_0/description.md)