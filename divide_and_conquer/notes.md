DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Divide and Conquer](#divide-and-conquer)
  - [Master Theorem](#master-theorem)
- [Examples:](#examples)
    - [Merge Sort, runtime: O(n log n)](#merge-sort-runtime-on-log-n)
    - [Find Smallest Not Belong To List](#find-smallest-not-belong-to-list)
    - [Binary Search](#binary-search)
    - [Bisect Left](#bisect-left)
    - [Bisect Right](#bisect-right)
    - [Find Peak Element](#find-peak-element)

## Divide and Conquer
- **Divide**: divide the problem into two or more smaller instances of the same problem (subproblems)
- **Conquer**: if the subproblem is small enough, return the solution directly; otherwise, solve it recursively
- **Combine**: combine the solutions to the subproblems to solve the original problem

### Master Theorem
It applies to runtime of divide-and-conquer algorithms when subproblems all have the **same** size, roughly.

![Master Theorem](../images/master_theorem.jpg)

## Examples:
#### [Merge Sort](./merge_sort/description.md), runtime: O(n log n)
#### [Find Smallest Not Belong To List](./find_smallest_not_belong/description.md)
#### [Binary Search](binary_search/description.md)
#### [Bisect Left](bisect_left/description.md)
#### [Bisect Right](bisect_right/description.md)
#### [Find Peak Element](find_peak_element/description.md)
