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
