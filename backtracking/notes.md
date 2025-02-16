DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Examples:](#examples)

## Backtracking
Usually as
```
for neighbor in neighbors:
  update state with neighbor

  recursive_call(neighbor)

  remove state with neighbor
```

Let `n` be the overall recursive calls for each recursion and `k` be the maximum depth of the recursion, the overall runtime is `O(n ^ k)`.

For example, if we have:
```
for i in range(4):
  # add and update state

  recursive_call(i)

  # remove and update state
```

Then `n = 4` and thus overall runtime is `O(n ^ k) = O(4 ^ k)`

## Examples:
- [Combination Sum III](./combination_sum_III/description.md)
- [Combinations](./combinations/description.md)
- [Letter Combinations of a Phone Number](./letter_combinations_of_a_phone_number/description.md)
- [Maximum Path Quality of a Graph](./maximum_path_quality_of_a_graph/description.md)
- [Palindrome Partititioning](./palindrome_partitioning/description.md)
- [Permutations II](./permutations_II/description.md)
- [Pseudo-palindromic Paths in a Binary Tree](./pseudo-palindromic_paths_in_a_binary_tree/description.md)
- [Robot Room Cleaner](./robot_room_cleaner/description.md)
- [Word Search](./word_search/description.md)
- [Path with Maximum Gold](./path_with_maximum_gold/description.md)
- [Split a String Into the Max Number of Unique Substrings](./split_a_string_into_the_max_number_of_unique_substrings/description.md)
- [The Number of Beautiful Subsets](./the_number_of_beautiful_subsets/description.md)
- [Maxium Score Words Formed by Letters](./maximum_score_words_formed_by_letters/description.md)
- [Word Break II](./word_break_II/description.md)
- [Count Number of Maximum Bitwise or Subsets](./count_number_of_maximum_bitwise_or_subsets/description.md)
- [Generate Parentheses](./generate_parentheses/description.md)
- [Construct the Lexicographically Largest Valid Sequence](./construct_the_lexicographically_largest_valid_sequence/description.md)