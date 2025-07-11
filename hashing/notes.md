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
    - [Find Words That Can Be Formed by Characters](#find-words-that-can-be-formed-by-characters)
    - [Destination City](#destination-city)
    - [Redistribute Characters to Make All Strings Equal](#redistribute-characters-to-make-all-strings-equal)
    - [Largest Substring Between Two Equal Characters](#largest-substring-between-two-equal-characters)
    - [Minimum Number of Steps to Make Two Strings Anagram](#minimum-number-of-steps-to-make-two-strings-anagram)
    - [Determine if Two Strings Are Close](#determine-if-two-strings-are-close)
    - [Find Players with Zero or One Losses](#find-players-with-zero-or-one-losses)
    - [Insert Delete GetRandom O(1)](#insert-delete-getrandom-o1)
    - [Unique Number of Occurrences](#unique-number-of-occurrences)
    - [Set Mismatch](#set-mismatch)
    - [Sort Characters By Frequency](#sort-characters-by-frequency)
    - [Find the Town Judge](#find-the-town-judge)
    - [Count Elements With Maximum Frequency](#count-elements-with-maximum-frequency)
    - [Intersection of Two Arrays](#intersection-of-two-arrays)
    - [Custom Sort String](#custom-sort-string)
    - [Binary Subarrays With Sum](#binary-subarrays-with-sum)
    - [Isomorphic Strings](#isomorphic-strings)
    - [Largest Positive Integer That Exists With Its Negative](#largest-positive-integer-that-exists-with-its-negative)

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
#### [Find Words That Can Be Formed by Characters](./find_words_that_can_be_formed_by_characters/description.md)
#### [Destination City](./destination_city/description.md)
#### [Redistribute Characters to Make All Strings Equal](./redistribute_characters_to_make_all_strings_equal/description.md)
#### [Largest Substring Between Two Equal Characters](./largest_substring_between_two_equal_characters/descritpion.md)
#### [Minimum Number of Steps to Make Two Strings Anagram](./minimum_number_of_steps_to_make_two_strings_anagram/description.md)
#### [Determine if Two Strings Are Close](./determine_if_two_strings_are_close/description.md)
#### [Find Players with Zero or One Losses](./find_players_with_zero_or_one_losses/description.md)
#### [Insert Delete GetRandom O(1)](./insert_delete_get_random/description.md)
#### [Unique Number of Occurrences](./unique_number_of_occurrences/description.md)
#### [Set Mismatch](./set_mismatch/description.md)
#### [Sort Characters By Frequency](./sort_characters_by_frequency/description.md)
#### [Find the Town Judge](./find_the_town_judge/description.md)
#### [Count Elements With Maximum Frequency](./count_elements_with_maximum_frequency/description.md)
#### [Intersection of Two Arrays](./intersection_of_two_arrays/description.md)
#### [Custom Sort String](./custom_sort_string/description.md)
#### [Binary Subarrays With Sum](./binary_subarrays_with_sum/description.md)
#### [Isomorphic Strings](./isomorphic_strings/descrption.md)
#### [Largest Positive Integer That Exists With Its Negative](./largest_positive_integer_that_exists_with_its_negative/description.md)
#### [Number of Ways Where Square of Numbers Is Equal to Product of Two Numbers](./number_of_ways_where_square_of_number_is_equal_to_product_of_two_numbers/description.md)
#### [Make Sum Divisible by P](./make_sum_divisible_by_p/description.md)
#### [Longest Palindrome](./longest_palindrome/description.md)
#### [Find Common Characters](./find_common_characters/description.md)
#### [Continuous Subarray Sum](./continuous_subarray_sum/description.md)
#### [Subarray Sums Divisible by K](./subarray_sums_divisible_by_k/description.md)
#### [Number of Atoms](./number_of_atoms/description.md)
#### [Create Binary Tree From Descriptions](./create_binary_tree_from_descriptions/description.md)
#### [Make Two Arrays Equal by Reversing Subarrays](./make_two_arrays_equal_by_reversing_subarrays/description.md)
#### [Kth Distinct String in an Array](./kth_distinct_string_in_an_array/description.md)
#### [Flip Columns For Maximum Number of Equal Rows](./flip_columns_for_maximum_number_of_equal_rows/description.md)
#### [Find the Prefix Common Array of Two Arrays](./find_the_prefix_common_array_of_two_arrays/description.md)
#### [First Completely Painted Row or Column](./first_completely_painted_row_or_column/description.md)
#### [Tuple with Same Product](./tuple_with_same_product/description.md)
#### [Find the Number of Distinct Colors Among the Balls](./find_the_number_of_distinct_colors_among_the_balls/description.md)
#### [Max Sum of a Pair With Equal Sum of Digits](./max_sum_of_a_pair_with_equal_sum_of_digits/description.md)
#### [Minimum Number of Operations to Make Elements in Array Distinct](./minimum_number_of_operations_to_make_elements_in_array_distinct/description.md)
#### [Rabbits in Forest](./rabbits_in_forest/description.md)
#### [Count Largest Group](./count_largest_group/description.md)
#### [Number of Equivalent Domino Pairs](./number_of_equivalent_domino_pairs/description.md)
#### [Longest Palindrome by Concatenating Two Letter Words](./longest_palindrome_by_concatenating_two_letter_words/description.md)
#### [Maximum Difference Between Even and Odd Frequency I](./maximum_difference_between_even_and_odd_frequency_i/description.md)
#### [Finding Pairs With a Certain Sum](./finding_pairs_with_a_certain_sum/description.md)