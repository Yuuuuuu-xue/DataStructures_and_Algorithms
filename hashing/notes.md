DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Hashing](#hashing)
- [Chaining or Closed Addressing](#chaining-or-closed-addressing)
- [Strategy to Design a Key](#strategy-to-design-a-key)
- [Examples:](#examples)
    - [Group Anagrams](#group-anagrams)
    - [Four Sum II](#four-sum-ii)
    - [Diagonal Traverse](#diagonal-traverse)
    - [Max Number of k-sum Pairs](#max-number-of-k-sum-pairs)
    - [Ransom Note](#ransom-note)
    - [Design Underground System](#design-underground-system)
    - [Find Duplicate File in System](#find-duplicate-file-in-system)
    - [Design HashMap](#design-hashmap)
    - [Majority Element II](#majority-element-ii)
    - [Sort Vowels in a String](#sort-vowels-in-a-string)
    - [Count Nice Pairs in an Array](#count-nice-pairs-in-an-array)

## Hashing
- **Universe of keys U**: is the set of all possible keys
- **Hash table T**: is an array with m positions. Each position is called a **slot** or **bucket**
- **Hash function**: a function, h: U -> {0, 1, 2, ..., m - 1}, maps keys to array position. To access key k, we should check T[h(k)].
- **Collision**: we have two keys x and y where x != y and h(x) == h(y), since |U| > m, collsion is unavoidable.

## Chaining or Closed Addressing
For each slot, we have a linked list. So when collision occurs, we just add it to the linked list.

## Strategy to Design a Key
- When the order of each element in the string / array doesn't matter, we can sort it and use it as our key. For example
  - $(x_0, x_5, x_3, x_4, x_2, x_1)$
  - $(x_3, x_2, x_5, x_1, x_0, x_4)$
  
  can both point to the same key $(x_0, x_1, x_2, x_3, x_4, x_5)$. 
- In a tree, we may want to use TreeNode as key sometime, but in most cases, the serialization of the subtree might be a better idea. 
- In a matrix, you might want to use the row index and/or the column index as the key
- In a matrix, we might want to aggregate the values in the same column
  - **Diagonal**: (i, j): **i - j**, on the same diagonal line
  - **Anti-diagonal**: (i, j): **i + j**, on the same anti-diagonal line

## Examples:
#### [Group Anagrams](group_anagrams/description.md)
#### [Four Sum II](four_sum_II/description.md)
#### [Diagonal Traverse](diagonal_traverse/description.md)
#### [Max Number of k-sum Pairs](max_numbers_of_k_sum_pairs/description.md)
#### [Ransom Note](ransom_note/description.md)
#### [Design Underground System](design_underground_system/description.md)
#### [Find Duplicate File in System](./find_duplicate_file_in_system/description.md)
#### [Design HashMap](./design_hashmap/description.md)
#### [Majority Element II](./majority_element_II/description.md)
#### [Sort Vowels in a String](./sort_vowels_in_a_string/description.md)
#### [Count Nice Pairs in an Array](./count_nice_pairs_in_an_array/description.md)
