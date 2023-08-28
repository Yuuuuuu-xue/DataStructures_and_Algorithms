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
- [Top Questions from Microsoft](#top-questions-from-microsoft)
- [Neetcode.io](#neetcodeio)
    - [Arrays and Hashing](#arrays-and-hashing)
    - [Binary Search](#binary-search)
    - [LinkedList](#linkedlist)
    - [Sliding Window](#sliding-window)
    - [Stack](#stack)
    - [Trees](#trees)
    - [Tries](#tries)
    - [Two Pointers](#two-pointers)
    - [Heap and Priority Queue](#heap-and-priority-queue)
    - [Backtracking](#backtracking-1)
    - [Graphs](#graphs-1)
    - [Advanced Graphs](#advanced-graphs)
    - [1D Dynamic Programming](#1d-dynamic-programming)
    - [2D Dynamic Programming](#2d-dynamic-programming)

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
    - [Range Module](divide_and_conquer/range_module/description.md)
    - [Minimize the Maximum Difference of Pairs](./divide_and_conquer/minimize_the_maximum_difference_of_pairs/description.md)
    - [Search in Rotated Sorted Array II](./divide_and_conquer/search_in_rotated_sorted_array_II/description.md)
  
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
  - [Average of Leaves in Binary Tree](./tree/average_of_leaves_in_binary_tree/description.md)
  - [Vertical Order Traversal of a Binary Tree](tree/vertical_order_traversal_of_a_binary_tree/description.md)
  - [N-ary Tree Level Order Traversal](./tree/n_ary_tree_level_order_traversal/description.md)
  - [Path Sum II](./tree/path_sum_II/description.md)
- [Binary Search Tree Notes](./BST/notes.md)
  Examples:
  - [Implementation](BST/implementation/description.md)
  - [Sorted Linked List to Balanced BST](BST/sorted_linked_list_to_balanced_bst/description.md)
  - [Convert Sorted Array to Binary Search Tree](BST/convert_sorted_array_to_binary_search_tree/description.md)
  - [Unique Binary Search Trees II](/BST/unique_binary_search_trees_II/description.md)
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
  - [Maximum Performance of a Team](./priority_queue/maximum_performance_of_a_team/description.md)
  - [Reorganize String](./priority_queue/reorganize_string/description.md)

## Hashing
- [Notes](./hashing/notes.md)
- Examples:
  - [Group Anagrams](hashing/group_anagrams/description.md)
  - [Four Sum II](hashing/four_sum_II/description.md)
  - [Diagonal Traverse](hashing/diagonal_traverse/description.md)
  - [Max Number of k-sum Pairs](hashing/max_numbers_of_k_sum_pairs/description.md)
  - [Ransom Note](hashing/ransom_note/description.md)
  - [Design Underground System](hashing/design_underground_system/description.md)
  - [Find Duplicate File in System](./hashing/find_duplicate_file_in_system/description.md)

## Sorting Algorithms
- [Notes](./sorting/notes.md)
- Examples:
  - [Merge Sort](./sorting/merge_sort/description.md)
  - [Quick Sort](./sorting/quick_sort/description.md)
  - [Reordered Power of 2](./sorting/reordered_power_of_2/description.md)
  - [Sort the Matrix Diagonally](sorting/sort_the_matrix_diagonally/description.md)

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
  - [Shortest Path to Get All Keys](graphs/shortest_path_to_get_all_keys/description.md)
  - [The Maze II](graphs/the_maze_II/description.md)
  - [01 Matrix](./graphs/01_matrix/description.md)
  - [Frog Jump](./graphs/frog_jump/description.md)

## Dijkstra's Algorithm
- [Notes](./dijkstra_algorithm/notes.md)
- Examples:
  - [Minimum Costs to Make At Least One Valid Path](dijkstra_algorithm/minimum_costs_to_make_at_least_one_valid_path_in_a_grid/description.md)

## Minimum Spanning Tree
- [Notes](./minimum_spanning_tree/notes.md)
- Examples: 
  - [Prim Algorithm](./minimum_spanning_tree/prim_algorithm/description.md)
  - [Kruskal Algorithm](./minimum_spanning_tree/kruskal_algorithm/description.md)
  - [Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree](./minimum_spanning_tree/find_critical_and_pseudo_critical_edges_in_minimum_spanning_tree/description.md)

## Disjoint Set
- [Notes](./disjoint_set/notes.md)
- Examples:
  - [Disjoint Set with Path Compression by Rank Implementation](disjoint_set/implementation/description.md)
  - [Number of Islands](disjoint_set/number_of_islands/description.md)
  - [Satisfiability of Equality Equations](disjoint_set/satisfiability_of_equality_equations/description.md)

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
  - [Bag of Tokens](./greedy/bag_of_tokens/description.md)
  - [Text Justification](./greedy/text_justification/description.md)
  - [Maximum Length of Pair Chain](./greedy/maximum_length_of_pair_chain/description.md)

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
  - [Best Time to Buy and Sell Stock IV](./dynamic_programming/best_time_to_buy_and_sell_stock_IV/description.md)
  - [Fibonacci Number](dynamic_programming/fibonacci_number/description.md)
  - [Longest Increasing Subsequency](dynamic_programming/longest_increasing_subsequence/description.md)
  - [Longest Common Subsequence](dynamic_programming/longest_common_subsequence/description.md)
  - [Minimum INsertion Steps to Make a String Palindrome](dynamic_programming/minimum_insertion_steps_to_make_a_string_palindrome/description.md)
  - [Longest Palindromic Subsequence](dynamic_programming/longest_palindromic_subsequence/description.md)
  - [Decode Ways](./dynamic_programming/decode_ways/description.md)
  - [Word Break](./dynamic_programming/word_break/description.md)
  - [Number of Music Playlists](./dynamic_programming/number_of_music_playlists/description.md)
  - [Coin Change II](./dynamic_programming/coin_change_II/description.md)
  - [Check if There is a Valid Partition For The Array](./dynamic_programming/check_if_there_is_a_valid_partition_for_the_array/description.md)

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
  - [Single Number II (XOR)](bitmask_and_bit_manipulation/single_number_II/description.md)
  - [Single Number III (XOR)](bitmask_and_bit_manipulation/single_number_III/description.md)

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
  - [Partition List](./linked_list/partition_list/description.md)

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
  - [Find Original Array From Doubled Array](./array/find_original_array_from_doubled_array/description.md)

## Backtracking
- Examples:
  - [Combination Sum III](backtracking/combination_sum_III/description.md)
  - [Letter Combinations of a Phone Number](backtracking/letter_combinations_of_a_phone_number/description.md)
  - [Permutations II](backtracking/permutations_II/description.md)
  - [Robot Room Cleaner](backtracking/robot_room_cleaner/description.md)
  - [Palindrome Partitioning](backtracking/palindrome_partitioning/description.md)
  - [Pseudo-Palindromic Paths in a Binary Tree](./backtracking/pseudo-palindromic_paths_in_a_binary_tree/)

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

## Top Questions from Microsoft
- Easy Level Examples
  - [Two Sum](./Microsoft_top_questions/two_sum/description.md)
  - [Valid Palindrome](./Microsoft_top_questions/valid_palindrome/description.md)
  - [Reverse String](./Microsoft_top_questions/reverse_string/description.md)
  - [Valid Parentheses](./Microsoft_top_questions/valid_palindrome/description.md)
  - [(Premium): Logger Rate Limiter](./Microsoft_top_questions/logger_rate_limiter/description.md)
  - [Find n Unique Integers Sum Up to Zero](./Microsoft_top_questions/find_n_unique_integers_sum_up_to_zero/description.md)
  - [Sign of the Product of an Array](./Microsoft_top_questions/sign_of_the_product_of_an_array/description.md)
  - [Remove Digit From Number to Maximize Result](./Microsoft_top_questions/remove_digit_from_number_to_maximize_result/description.md)
- Medium Level Examples
  - [String to Integer (atoi)](./Microsoft_top_questions/string_to_integer/description.md)
  - [Reverse Words in a String](./Microsoft_top_questions/reverse_words_in_a_string/description.md)
  - [(Premium): Reverse Words in a String II](./Microsoft_top_questions/reverse_words_in_a_string_II/description.md)
  - [Longest Palindromic Substring](./Microsoft_top_questions/longest_palindromic_substring/description.md)
  - [Set Matrix Zeroes](./Microsoft_top_questions/set_matrix_zeroes/description.md)
  - [Multiply Strings](./Microsoft_top_questions/multiply_strings/description.md)
  - [Spiral Matrix](./Microsoft_top_questions/spiral_matrix/description.md)
  - [Word Search](./Microsoft_top_questions/word_search/description.md)
  - [(Premium) Meeting Rooms II](./Microsoft_top_questions/meeting_rooms_II/description.md)
  - [(Premium) Inorder Successor in BST](./Microsoft_top_questions/inorder_successor_in_BST/description.md)
  - [(Premium) Design Tic-Tac-Toe](./Microsoft_top_questions/design_tic_tac_toe/description.md)
  - [(Premium) Design Hit Counter](./Microsoft_top_questions/design_hit_counter/description.md)
  - [String Compression](./Microsoft_top_questions/string_compression/description.md)
  - [Minimum Moves to Equal Array Elements](./Microsoft_top_questions/minimum_moves_to_equal_array_elements/description.md)
  - [Design Circular Queue](./Microsoft_top_questions/design_circular_queue/description.md)
  - [Top k Frequent Words](./Microsoft_top_questions/top_k_frequent_words/description.md)
  - [Maximize Distance to Closest Person](./Microsoft_top_questions/maximize_distance_to_closest_person/description.md)
  - [Angle Between Hands of a Clock](./Microsoft_top_questions/angle_between_hands_of_a_clock/description.md)
  - [Number of Steps to Reduce a Number in Binary Representation to One](./Microsoft_top_questions/number_of_steps_to_reduce_a_number_in_binary_representation_to_one/description.md)
  - [Longest Happy String](./Microsoft_top_questions/longest_happy_string/description.md)
  - [Maximal Network Rank](./Microsoft_top_questions/maximal_network_rank/description.md)
  - [Minimum Deletions to Make Character Frequencies Unique](./Microsoft_top_questions/minimum_deletions_to_make_character_frequencies_unique/description.md)
  - [Recover Binary Search Tree](./Microsoft_top_questions/recover_binary_search_tree/description.md)
  - [Binary Tree Ziqzag Level Order Traversal](./Microsoft_top_questions/binary_tree_zigzag_level_order_traversal/description.md)
  - [Shortest Bridge](./Microsoft_top_questions/shortest_bridge/description.md)
  - [Minimum Deleteions to Make String Balanced](./Microsoft_top_questions/minimum_deletions_to_make_string_balanced/description.md)
  - [Equal Sum Arrays with Minimum Number of Operations](./Microsoft_top_questions/equal_sum_arrays_with_minimum_number_of_operations/description.md)
- Hard Level Examples
  - [Trapping Rain Water](./Microsoft_top_questions/trapping_rain_water/description.md)
  - [Wilecard Matching](./Microsoft_top_questions/wildcard_matching/description.md)
  - [LFU Cache](./Microsoft_top_questions/lfu_cache/description.md)
  - [Design In-Memory File System](./Microsoft_top_questions/design_in_memory_file_system/description.md)
  - [Max Chunks to Make Sorted II](./Microsoft_top_questions/max_chunks_to_make_sorted_II/description.md)
  - [Partition Array into Two Arrays to Minimize Sum Difference](./Microsoft_top_questions/partition_array_into_two_arrays_to_minimize_sum_difference/description.md)
  - [Longest Path with Different Adjacent Characters](./Microsoft_top_questions/longest_path_with_different_adjacent_characters/description.md)

## Neetcode.io
#### Arrays and Hashing
- [Contains Duplicate](./neetcode.io/arrays_and_hashing/contains_duplicate/description.md)
- [Two Sum](./neetcode.io/arrays_and_hashing/easy_two_sum/description.md)
- [Valid Anagram](./neetcode.io/arrays_and_hashing/easy_valid_anagram/description.md)
- [Encode and Decode Strings](./neetcode.io/arrays_and_hashing/medium_encode_and_decode_strings/description.md)
- [Group Anagrams](./neetcode.io/arrays_and_hashing/medium_group_anagrams/description.md)
- [Longest Consecutive Sequence](./neetcode.io/arrays_and_hashing/medium_longest_consecutive_sequence/description.md)
- [Product of Array Except Self](./neetcode.io/arrays_and_hashing/medium_product_of_array_except_self/description.md)
- [Top k Frequent Elements](./neetcode.io/arrays_and_hashing/medium_top_k_frequent_elements/description.md)
- [Valid Sudoku](./neetcode.io/arrays_and_hashing/medium_valid_sudoku/description.md)

#### Binary Search
- [Binary Search](./neetcode.io/binary_search/easy_binary_search/description.md)
- [Median of Two Sorted Arrays](./neetcode.io/binary_search/hard_median_of_two_sorted_arrays/description.md)
- [Find minimum in Rotated Sorted Array](./neetcode.io/binary_search/medium_find_minimum_in_rotated_sorted_array/description.md)
- [Koko Eating Bananas](neetcode.io/binary_search/medium_koko_eating_bananas/description.md)
- [Search a 2D matrix](neetcode.io/binary_search/medium_search_a_2d_matrix/description.md)
- [Time Based Key Value Store](neetcode.io/binary_search/medium_time_based_key_value_store/description.md)

#### LinkedList
- [Linked List Cycle](neetcode.io/linked_list/easy_linked_list_cycle/description.md)
- [Merge Two Sorted Lists](neetcode.io/linked_list/easy_merge_two_sorted_lists/description.md)
- [Reverse Linked List](neetcode.io/linked_list/easy_reverse_linked_list/description.md)
- [Merge k Sorted Lists](neetcode.io/linked_list/hard_merge_k_sorted_lists/description.md)
- [Reverse Nodes in k Group](neetcode.io/linked_list/hard_reverse_nodes_in_k_group/description.md)
- [Add Two Numbers](neetcode.io/linked_list/medium_add_two_numbers/description.md)
- [Copy List with Random Pointer](neetcode.io/linked_list/medium_copy_list_with_random_pointer/description.md)
- [Find the Duplicate Number](neetcode.io/linked_list/medium_find_the_duplicate_number/description.md)
- [LRU Cache](neetcode.io/linked_list/medium_LRU_cache/description.md)
- [Remove nth Node from End of List](neetcode.io/linked_list/medium_remove_nth_node_from_end_of_list/description.md)
- [Reorder List](neetcode.io/linked_list/medium_reorder_list/description.md)

#### Sliding Window
- [Best Time to Buy and Sell Stock](neetcode.io/sliding_window/easy_best_time_to_buy_and_sell_stock/description.md)
- [Minimum Window Substring](neetcode.io/sliding_window/hard_minimum_window_substring/description.md)
- [Sliding Window Maximum](neetcode.io/sliding_window/hard_sliding_window_maximum/description.md)
- [Longest Repeating Character Replacement](neetcode.io/sliding_window/medium_longest_repeating_character_replacement/description.md)
- [Longest Substring Without Repeating Characters](neetcode.io/sliding_window/medium_longest_substring_without_repeating_characters/description.md)
- [Permutation in String](neetcode.io/sliding_window/medium_permutation_in_string/description.md)

#### Stack
- [Valid Parentheses](neetcode.io/stack/easy_valid_parentheses/description.md)
- [Largest Rectangle in Histogram](neetcode.io/stack/hard_largest_rectangle_in_histogram/description.md)
- [Car Fleet](neetcode.io/stack/medium_car_fleet/description.md)
- [Daily Temperatures](neetcode.io/stack/medium_daily_temperatures/description.md)
- [Evaluate Reverse Polish Notation](neetcode.io/stack/medium_evaluate_reverse_polish_notation/description.md)
- [Generate Parentheses](neetcode.io/stack/medium_generate_parentheses/description.md)
- [Min Stack](neetcode.io/stack/medium_min_stack/description.md)

#### Trees
- [Balanced Binary Tree](neetcode.io/trees/easy_balanced_binary_tree/description.md)
- [Diameter of Binary Tree](neetcode.io/trees/easy_diameter_of_binary_tree/description.md)
- [Invert Binary Tree](neetcode.io/trees/easy_invert_binary_tree/description.md)
- [Lowest Common Ancestor of a Binary Search Tree](neetcode.io/trees/easy_lowest_common_ancestor_of_a_binary_search_tree/description.md)
- [Maximum Depth of Binary Tree](neetcode.io/trees/easy_maximum_depth_of_binary_tree/description.md)
- [Same Tree](neetcode.io/trees/easy_same_tree/description.md)
- [Subtree of Another Tree](neetcode.io/trees/easy_subtree_of_another_tree/description.md)
- [Binary Tree Maximum Path Sum](neetcode.io/trees/hard_binary_tree_maximum_path_sum/description.md)
- [Serialize and Deserialize Binary Tree](neetcode.io/trees/hard_serialize_and_deserialize_binary_tree/description.md)
- [Binary Tree level Order Traversal](neetcode.io/trees/medium_binary_tree_level_roder_traversal/description.md)
- [Binary Tree right Side View](neetcode.io/trees/medium_binary_tree_right_side_view/description.md)
- [Construct Binary Tree from Preorder and Inorder Traversal](neetcode.io/trees/medium_construct_binary_tree_from_preorder_and_inorder_traversal/description.md)
- [Count Good Nodes in Binary Tree](neetcode.io/trees/medium_count_good_nodes_in_binary_tree/description.md)
- [Kth Smallest Element in a BST](neetcode.io/trees/medium_kth_smallest_element_in_a_bst/description.md)
- [Validate Binary Search Tree](neetcode.io/trees/medium_validate_binary_search_tree/description.md)

#### Tries
- [Word Search II](neetcode.io/tries/hard_word_search_II/description.md)
- [Design Add and Search Words Data Structure](neetcode.io/tries/medium_design_add_and_search_words_data_structure/description.md)
- [Implement Trie](neetcode.io/tries/medium_implement_trie/description.md)
  
#### Two Pointers
- [Valid Palindrome](neetcode.io/two_pointers/easy_valid_palindrome/description.md)
- [Trapping Rain Water](neetcode.io/two_pointers/hard_trapping_rain_water/description.md)
- [Container with Most Water](neetcode.io/two_pointers/medium_container_with_most_water/description.md)
- [Three Sums](neetcode.io/two_pointers/medium_three_sums/description.md)
- [Two Sum II Input Array is Sorted](neetcode.io/two_pointers/medium_two_sum_II_input_array_is_sorted/description.md)

#### Heap and Priority Queue
- [Kth Largest Element in a Stream](./neetcode.io/heap/easy_kth_largest_element_in_a_stream/description.md)
- [Last Stone Weight](./neetcode.io/heap/easy_last_stone_weight/description.md)
- [K Cloest Points to Origin](./neetcode.io/heap/medium_k_cloest_points_to_origin/description.md)
- [Kth Largest Element in an Array](./neetcode.io/heap/medium_kth_largest_element_in_an_array/description.md)
- [Task Scheduler](./neetcode.io/heap/medium_task_scheduler/description.md)
- [Design Twitter](./neetcode.io/heap/medium_design_twitter/description.md)
- [Find Median From Data Stream](./neetcode.io/heap/hard_find_median_from_data_stream/description.md)

#### Backtracking
- [Subsets](./neetcode.io/backtracking/medium_subsets/description.md)
- [Combination Sum](./neetcode.io/backtracking/medium_combination_sum/description.md)
- [Permutations](./neetcode.io/backtracking/medium_permutations/description.md)
- [Subsets II](./neetcode.io/backtracking/medium_subsets_II/description.md)
- [Combination Sum II](./neetcode.io/backtracking/medium_combination_sum_II/description.md)
- [Word Search](./Microsoft_top_questions/word_search/description.md)
- [Palindrome Partitioning](./backtracking/palindrome_partitioning/description.md)
- [Letter Combinations of a Phone Number](./backtracking/letter_combinations_of_a_phone_number/description.md)
- [N Queens](./array/n_queens/description.md)

#### Graphs
- [Number of Islands](./disjoint_set/number_of_islands/description.md)
- [Clone Graph](./neetcode.io/graphs/medium_clone_graph/solution.cpp)
- [Max Area of Island](./neetcode.io/graphs/medium_max_area_of_island/description.md)
- [Pacific Atlantic Water Flow](./graphs/pacific_atlantic_water_flow/description.md)
- [Surrounded Regions](./neetcode.io/graphs/medium_surrounded_regions/description.md)
- [Rotting Oranges](./neetcode.io/graphs/medium_rotting_oranges/description.md)
- [Walls and Gates](./graphs/walls_and_gates/description.md)
- [Course Schedule](./graphs/course_schedule/description.md)
- [Course Schedule II](./topological_sort/course_schedule_II/description.md)
- [Redundant Connection](./neetcode.io/graphs/medium_redundant_connection/description.md)
- [Word Ladder](./neetcode.io/graphs/hard_word_ladder/description.md)

#### Advanced Graphs
- [Reconstruct Itinerary](./neetcode.io/advanced_graphs/hard_reconstruct_itinerary/description.md)
- [Min Cost to Connect All Points](./neetcode.io/advanced_graphs/medium_min_cost_to_connect_all_points/description.md)
- [Network Dealy Time](./shortest_weight_path/network_delay_time/description.md)
- [Swim in Rising Water](./neetcode.io/advanced_graphs/medium_swim_in_rising_water/description.md)
- [Alien Dictionary](./topological_sort/alien_dictionary/description.md)
- [Cheapest Flights Within K Stops](./neetcode.io/advanced_graphs/medium_cheapest_flights_within_k_stops/description.md)

#### 1D Dynamic Programming
- [Climbing Stairs](./neetcode.io/1d_dynamic_programming/easy_climbing_stairs/description.md)
- [Min Cost Climbing Stairs](./neetcode.io/1d_dynamic_programming/easy_min_cost_climbing_stairs/description.md)
- [House Robber](./neetcode.io/1d_dynamic_programming/medium_house_robber/description.md)
- [House Robber II](./neetcode.io/1d_dynamic_programming/medium_house_robber_II/description.md)
- [Longest Palindromic Substring](./dynamic_programming/longest_palindromic_substring/description.md)
- [Palindromic Substrings](./dynamic_programming/palindromic_substrings/description.md)
- [Decode Ways](./dynamic_programming/decode_ways/description.md)
- [Coin Change](./dynamic_programming/coin_change/description.md)
- [Maximum Product Subarray](./array/maximum_product_subarray/description.md)
- [Word Break](./dynamic_programming/word_break/description.md)
- [Longest Increasing Subsequence](./dynamic_programming/longest_increasing_subsequence/description.md)
- [Partition Equal Subset Sum](./dynamic_programming/partition_equal_subset_sum/description.md)

#### 2D Dynamic Programming
- [Unique Paths](./dynamic_programming/unique_paths/description.md)
- [Longest Common Subsequence](./dynamic_programming/longest_common_subsequence/description.md)
- [Best Time to Buy and Sell Stock with Cooldown](./dynamic_programming/best_time_to_buy_and_sell_stock_with_cooldown/description.md)
- [Coin Change II](./dynamic_programming/coin_change_II/description.md)
- [Target Sum](./neetcode.io/2d_dynamic_programming/target_sum/description.md)
- [Interleaving String](./neetcode.io/2d_dynamic_programming/interleaving_string/description.md)
- [Longest Increasing Path in a Matrix](./dynamic_programming/longest_increasing_path_in_a_matrix/description.md)
- [Distinct Subsequences](./neetcode.io/2d_dynamic_programming/distinct_subsequences/description.md)
- [Edit Distance](./neetcode.io/2d_dynamic_programming/edit_distance/description.md)
- [Brust Balloons](./neetcode.io/2d_dynamic_programming/brust_balloons/description.md)