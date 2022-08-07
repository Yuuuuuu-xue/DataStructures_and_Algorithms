DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Dynamic Programming](#dynamic-programming)
- [Five Steps of Dynamic Programming](#five-steps-of-dynamic-programming)
- [Differece between Brute Force, Dynamic Programming, and Greedy Algorithm](#differece-between-brute-force-dynamic-programming-and-greedy-algorithm)
- [Examples:](#examples)
    - [Rod Cutting](#rod-cutting)
    - [Subset Sum](#subset-sum)
    - [Longest Palindromic Substring](#longest-palindromic-substring)
    - [Edit Distance](#edit-distance)
    - [Course Schedule IV FloydWarshall](#course-schedule-iv-floydwarshall)
    - [Count Sorted Vowel Strings](#count-sorted-vowel-strings)
    - [Longest Increasing Path in a Matrix](#longest-increasing-path-in-a-matrix)
    - [Unique Paths II](#unique-paths-ii)
    - [Palindromic Substrings](#palindromic-substrings)
    - [Coin Change](#coin-change)
    - [Ones and Zeroes](#ones-and-zeroes)
    - [Pascal's Triangle II](#pascals-triangle-ii)
    - [Unique Paths](#unique-paths)
    - [Combination Sum IV](#combination-sum-iv)
    - [Count Vowels Permutation](#count-vowels-permutation)

## Dynamic Programming
- A **dynamic programming algorithm** for an optimization problem is basically a recursive solution that uses **memoization** to solve repeated calls to the same subproblems.
- We can apply dynamic programming to solve a problem if:
  - A problem exhibits **optimal substructure** if an optimal solution to the problem contains within it optimal solutions to subproblems.
  - A problem is said to have **overlapping subproblems** if subproblems share subsubproblem, or requivalently, if the problem can be broken down into subproblems which are reused several times. 

## Five Steps of Dynamic Programming
1. Defining the optimal substructure / recursive structure
2. Array definition for memoization
3. Defining the recurrence relation in terms of the array
4. Bottom-up iterative algorithm
5. Find one optimum solution using the array values

## Differece between Brute Force, Dynamic Programming, and Greedy Algorithm
- **Brute force** algorithm explores every possible solution from the solution space. Often ended up with time-limited exceed or space-limited exceed.
- **Dynamic Programming** algorithm first finds optimal solutions to subproblems and then makes an informed chocie. It's important to make sure that they are only a polynomial number of subproblems.
- **Greedy** algorithm first makes a greedy choice - the choice that looks best at the moment and then solves a resulting subproblem, without bothering to solve all possible related smaller subproblems.

## Examples:
#### [Rod Cutting](rod_cutting/description.md)
#### [Subset Sum](subset_sum/description.md)
#### [Longest Palindromic Substring](longest_palindromic_substring/description.md)
#### [Edit Distance](edit_distance/description.md)
#### [Course Schedule IV FloydWarshall](course_schedule_IV/description.md)
#### [Count Sorted Vowel Strings](count_sorted_vowel_strings/description.md)
#### [Longest Increasing Path in a Matrix](longest_increasing_path_in_a_matrix/description.md)
#### [Unique Paths II](unique_paths_II/description.md)
#### [Palindromic Substrings](palindromic_substrings/description.md)
#### [Coin Change](coin_change/description.md)
#### [Ones and Zeroes](ones_and_zeroes/description.md)
#### [Pascal's Triangle II](pascal_triangle_II/description.md)
#### [Unique Paths](unique_paths/description.md)
#### [Combination Sum IV](combination_sum_IV/description.md)
#### [Count Vowels Permutation](count_vowels_permutation/description.md)