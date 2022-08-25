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
- [Stack and Queue](#stack-and-queue)
- [Graphs](#graphs)
- [Dijkstra's Algorithm](#dijkstras-algorithm)
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
- [Backtracking](#backtracking)
- [Topological Sort](#topological-sort)

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
    - [Divide Chocolate](./divide_and_conquer/divide_chocolate/description.md)
    - [Shortest Distance to Target Color](./divide_and_conquer/shortest_distance_to_target_color/description.md)
    - [Longest Increasing Subsequence](./divide_and_conquer/longest_increasing_subsequence/description.md)
    - [Different Ways to Add Parentheses](./divide_and_conquer/different_ways_to_add_parentheses/description.md)
    - [Split Array Largest Sum](./divide_and_conquer/split_array_largest_sum/description.md)
  
## Tree
- [General Notes](./tree/notes.md)
- Examples:
  - [Is Balanced Binary Tree](./tree/is_balanced_binary_tree/description.md)
  - [Binary Tree Level Order Traversal](./tree/binary_tree_level_order_traversal/description.md)
  - [BST to Balanced BST](./tree/bst_to_balance_bst/description.md)
  - [Find a Corresponding Node of a Binary Tree in a Clone of that Tree](./tree/find_a_corresponding_node_of_a_binary_tree_in_a_clone_of%20_that_tree/description.md)
  - [Find All the Lonely Nodes](./tree/find_all_the_lonely_nodes/descrption.md)
  - [Kill Process](./tree/kill_process/description.md)
  - [Binary Tree Vertical Order Traversal](./tree/binary_tree_vertical_order_traversal/description.md)
  - [All Nodes Distance k In Binary Tree](tree/all_nodes_distance_k_in_binary_tree/description.md)
  - [Find Leaves of Binary Tree](tree/find_leaves_of_binary_tree/description.md)
  - [House Robber III](tree/hourse_robber_III/description.md)
  - [Binary Tree Longest Consecutive Sequence II](tree/binary_tree_longest_consecutive_sequence_II/description.md)
- [Binary Search Tree Notes](./BST/notes.md) \
  Examples:
  - [Implementation](BST/implementation/description.md)
  - [Sorted Linked List to Balanced BST](BST/sorted_linked_list_to_balanced_bst/description.md)
  - [Convert Sorted Array to Binary Search Tree](BST/convert_sorted_array_to_binary_search_tree/description.md)
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
  - [Kth Smallest Element in a Sorted Matrix](./priority_queue/kth_smallest_element_in_a_sorted_matrix/description.md)

## Hashing
- [Notes](./hashing/notes.md)
- Examples:
  - [Group Anagrams](hashing/group_anagrams/description.md)
  - [Four Sum II](hashing/four_sum_II/description.md)
  - [Diagonal Traverse](hashing/diagonal_traverse/description.md)
  - [Max Number of k-sum Pairs](hashing/max_numbers_of_k_sum_pairs/description.md)
  - [Ransom Note](hashing/ransom_note/description.md)

## Sorting Algorithms
- [Notes](./sorting/notes.md)
- Examples:
  - [Merge Sort](./sorting/merge_sort/description.md)
  - [Quick Sort](./sorting/quick_sort/description.md)

## Stack and Queue
- [Notes](./stack_and_queue/notes.md)
- Examples:
  - [Backspace String Compare](./stack_and_queue/backspace_string_compare/description.md)
  - [Implement Stack Using Queues](./stack_and_queue/implement_stack_using_queues/description.md)
  - [Remove All Adjacent Duplicates in String II](./stack_and_queue/remove_all_adjacent_duplicates_in_string_II/description.md)
  - [132 Pattern](./stack_and_queue/132_pattern/description.md)
  - [Flatten Nested List Iterator](./stack_and_queue/flatten_nested_list_iterator/description.md)
  - [Longest Valid Parentheses](./stack_and_queue/longest_valid_parentheses/description.md)
  - [Find Permutation](./stack_and_queue/find_permutation/description.md)

## Graphs
- [Notes](./graphs/notes.md)
- Examples:
  - [Is Bilateral (BFS)](./graphs/is_bilateral/description.md)
  - [Jump Game IV (BFS)](./graphs/jump_game_IV/description.md)
  - [Schedule Course (DFS detects cycle)](./graphs/course_schedule/description.md)
  - [Populating Next Right Pointers in Each Node II (BFS)](./graphs/populating_next_right_pointers_in_each_node_II/description.md)
  - [Deepest Leaves Sum](graphs/deepest_leaves_sum/description.md)
  - [Shortest Path in Binary Matrix](grpahs/../shortest_weight_path/network_delay_time/description.md)
  - [Walls and Gates](graphs/walls_and_gates/description.md)
  - [Pacific Atlantic Water Flow](graphs/pacific_atlantic_water_flow/description.md)
  - [Open the Lock](graphs/open_the_lock/description.md)
  - [Number of Operations to Make Network Connections](graphs/number_of_operations_to_make_network_connected/description.md)
  - [Remove Invalid Parentheses](graphs/remove_invalid_parentheses/description.md)

## Dijkstra's Algorithm
- [Notes](./dijkstra_algorithm/notes.md)
- Examples:
  - [Minimum Costs to Make At Least One Valid Path](dijkstra_algorithm/minimum_costs_to_make_at_least_one_valid_path_in_a_grid/description.md)

## Minimum Spanning Tree
- [Notes](./minimum_spanning_tree/notes.md)
- Examples: 
  - [Prim Algorithm](./minimum_spanning_tree/prim_algorithm/description.md)
  - [Kruskal Algorithm](./minimum_spanning_tree/kruskal_algorithm/description.md)

## Disjoint Set
- [Notes](./disjoint_set/notes.md)
- Examples:
  - [Disjoint Set with Path Compression by Rank Implementation](disjoint_set/implementation/description.md)
  - [Number of Islands](disjoint_set/number_of_islands/description.md)

## Greedy Algorithm
- [Notes](./greedy/notes.md)
- Examples:
  - [Scheduling Intervals](greedy/interval_scheduling/description.md)
  - [Interval Partitioning](greedy/interval_partitioning/description.md)
  - [Schedule Course III (Greedy Algorithm with max heap)](./greedy/course_schedule_III/description.md)
  - [Maximum Units on a Truck](./greedy/maximum_units_on_a_truck/description.md)
  - [Reduce Array Size to the Half](./greedy/reduce_array_size_to_the_half/description.md)
  - [Split Array into consecutive Subsequences](greedy/split_array_into_consecutive_subsequences/description.md)
  - [Minimum Number of Refueling Stops](greedy/minimum_number_of_refueling_stops/description.md)

## Dynamic Programming
- [Notes](./dynamic_programming/notes.md)
- Examples:
  - [Rod Cutting](dynamic_programming/rod_cutting/description.md)
  - [Subset Sum](dynamic_programming/subset_sum/description.md)
  - [Longest Palindromic Substring](dynamic_programming/longest_palindromic_substring/description.md)
  - [Edit Distance](dynamic_programming/edit_distance/description.md)
  - [Course Schedule IV FloydWarshall](dynamic_programming/course_schedule_IV/description.md)
  - [Count Sorted Vowel Strings](dynamic_programming/count_sorted_vowel_strings/description.md)
  - [Longest Increasing Path in a Matrix](dynamic_programming/longest_increasing_path_in_a_matrix/description.md)
  - [Unique Paths II](dynamic_programming/unique_paths_II/description.md)
  - [Coin Change](dynamic_programming/coin_change/description.md)
  - [Palindromic Substrings](dynamic_programming/palindromic_substrings/description.md)
  - [Ones and Zeroes](dynamic_programming/ones_and_zeroes/description.md)
  - [Pascal's Triangle II](dynamic_Programming/pascal_triangle_II/description.md)
  - [Unique Paths](dynamic_programming/unique_paths/description.md)
  - [Combination Sum IV](dynamic_programming/combination_sum_IV/description.md)
  - [Count Vowels Permutation](dynamic_programming/count_vowels_permutation/description.md)
  - [Binary Trees with Factor](dynamic_programming/binary_trees_with_factor/description.md)
  - [Regular Expression Matching](dynamic_programming/regular_expression_matching/description.md)
  - [Best Time to Buy and Sell Stock with Cooldown](dynamic_programming/best_time_to_buy_and_sell_stock_with_cooldown/description.mdd)
  - [Best Time to Buy and Sell Stock with Transaction Fee](dynamic_programming/best_time_to_buy_and_sell_stock_with_transaction_fee/description.md)
  - [Maximal Square](dynamic_programming/maximal_square/description.md)
  - [Predict the Winner](dynamic_programming/predict_the_winner/description.md)
  - [Palindrome Partitioning II](dynamic_programming/palindrome_partitioning_II/description.md)
  - [Partition Equal Subset Sum](dynamic_programming/partition_equal_subset_sum/description.md)
  - [Minimum Cost for Tickets](dynamic_programming/minimum_cost_for_tickets/description.md)
  - [Best Time to Buy and Sell Stock III](dynamic_programming/best_time_to_buy_and_sell_stock_III/description.md)
  - [Dungeon Game](dynamic_programming/dungeon_game/description.md)

## Shorest Weight Path (Dijkstra Algorithm)
- [Notes](./shortest_weight_path/notes.md)
- Examples:
  - [Dijkstra Algorithm Implementation](./shortest_weight_path/dijkstra_algorithm/description.md)\
  - [Network Delay Time](./shortest_weight_path/network_delay_time/description.md)

## Bitmask and Bit Manipulation
- [Notes](./bitmask_and_bit_manipulation/notes.md)
- Examples:
  - [Single Number (XOR)](bitmask_and_bit_manipulation/single_number/description.md)
  - [Maximum Product of Word Lengths (Bitmaks)](bitmask_and_bit_manipulation/maximum_product_of_word_lengths/description.md)
  - [Number of 1 Bits](bitmask_and_bit_manipulation/number_of_1_bits/description.md)
  - [Maximum Length of a Concatenated String with Unique Characters](bitmask_and_bit_manipulation/maximum_length_of_a_concatenated_string_with_unique_characters/description.md)
  - [Find Winner on a TicTacToe Game](bitmask_and_bit_manipulation/find_winner_on_a_tictactoe_game/description.md)
  - [Cinema Seat Allocation](bitmask_and_bit_manipulation/cinema_seat_allocation/description.md)

## Fenwick Tree (Binary Indexed Tree)
- [Notes](./fenwick_tree/notes.md)
- Examples:
  - [BIT Implementation](fenwick_tree/BIT_implementation/description.md)
  - [Range Sum Query Mutable](fenwick_tree/range_sum_query_mutable/description.md)
  - [Count of Smaller Numbers After Self](fenwick_tree/count_of_smaller_numbers_after_self/description.md)

## Trie
- [Notes](./trie/notes.md)
- Examples:
  - [Trie Implementation](trie/trie_implementation/description.md)
  - [Word Search II](trie/word_search_II/description.md)
  - [Design Add and Search Words Data Structure](trie/design_add_and_search_words_data_structure/description.md)
  - [Implement Trie](trie/implement_trie/description.md)
  - [Design Search Autocomplete System (Premium)](trie/design_search_autocomplete_system/description.md)

## Linked List 
- [Notes](./linked_list/notes.md)
- Example:
  - [First Node of a Cycle in Linked List](./linked_list/linked_list_first_node_cycle/description.md)
  - [Palindrome Linked List](linked_list/palindrome_linked_list/description.md)

## Array
- Examples:
  - [Maximum Product Subarray](array/maximum_product_subarray/description.md)
  - [Three Sum Equal To 0](array/3_sum_equal_to_0/description.md)
  - [Sort Array by Parity](array/sort_array_by_parity/description.md)
  - [Shortest Unsorted Continuous Subarray](array/shortest_unsorted_continuous_subarray/description.md)
  - [Sort Colors](array/sort_colors/description.md)
  - [Merge Intervals](array/merge_intervals/description.md)
  - [Check If a String Contains All Binary Codes of Size k](array/check_if_a_string_contains_all_binary_codes_of_size_k/description.md)
  - [Tranpose Matrix](array/transpose_matrix/description.md)
  - [My Calendar I](array/my_calendar_I/description.md)
  - [Meeting Scheduler](array/meeting_scheduler/description.md)
  - [Find the Duplicate Number (Floyd's algorithm)](array/find_the_duplicate_number/description.md)
  - [Product of Two Run-length Encoded Arrays](array/product_of_two_run_length_encoded_arrays/description.md)
  - [Longest Substring With At Most Two Distinct Characters](array/longest_substring_with_at_most_two_distinct_characters/description.md)
  - [Longest Substring With At Most k Distinct Characters](array/longest_substring_with_at_most_k_distinct_characters/description.md)
  - [Max Consecutive Ones III](array/max_consecutiveones_III/description.md)
  - [Factor Combinations](array/factor_combinations/description.md)
  - [Decode String](array/decode_string/description.md)
  - [Substring with Concatenation of All Words](array/substring_with_concatenation_of_all_words/description.md)
  - [N Queens](array/n_queens/description.md)
  - [Sudoku Solver](array/sudoku_solver/description.md)
  - [Roman to Integer](array/roman_to_integer/description.md)
  - [Dot Product of Two Sparse Vectors](array/dot_product_of_two_sparse_vectors/description.md)
  - [First Unique Character in a String](array/first_unique_character_in_a_string/description.md)
  - [Maximum Subarray](array/maximum_subarray/description.md)
  - [Unique Morse Code Words](array/unique_morse_code_words/description.md)

## Backtracking
- Examples:
  - [Combination Sum III](backtracking/combination_sum_III/description.md)
  - [Letter Combinations of a Phone Number](backtracking/letter_combinations_of_a_phone_number/description.md)
  - [Permutations II](backtracking/permutations_II/description.md)
  - [Robot Room Cleaner](backtracking/robot_room_cleaner/description.md)
  - [Palindrome Partitioning](backtracking/palindrome_partitioning/description.md)

## Topological Sort
- [Notes](./topological_sort/notes.md)
- Examples:
  - [Implementation](topological_sort/implementation/description.md)
  - [Course Schedule II](topological_sort/course_schedule_II/description.md)
  - [Alien Dictionary](topological_sort/alien_dictionary/description.md)
- [Kahn's Algorithm BFS Implementation](topological_sort/kahn_algorithm/description.md)
  - [Minimum Height Trees](topological_sort/minimum_height_trees/description.md)
  - [Longest Increasing Path in a Matrix](topological_sort/longest_increasing_path_in_a_matrix/description.md)
  - [Parallel Courses](topological_sort/parallel_courses/description.md)