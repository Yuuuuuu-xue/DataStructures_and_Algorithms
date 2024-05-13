DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Bit Manipulation](#bit-manipulation)
    - [Bitwise And](#bitwise-and)
    - [Bitwise Or](#bitwise-or)
    - [Bitwise Not](#bitwise-not)
    - [Shift left](#shift-left)
    - [Shift Right](#shift-right)
- [Bitmask](#bitmask)
- [Set a bit to 1](#set-a-bit-to-1)
- [Set a bit to 0](#set-a-bit-to-0)
- [Check if a bit is 0 or 1](#check-if-a-bit-is-0-or-1)
- [Examples:](#examples)
    - [Single Number (XOR)](#single-number-xor)
    - [Maximum Product of Word Lengths](#maximum-product-of-word-lengths)
    - [Number of 1 bits](#number-of-1-bits)
    - [Maximum Length of a Concatenated String with Unique Charaters](#maximum-length-of-a-concatenated-string-with-unique-charaters)
    - [Find Winner on a TicTacToe Game](#find-winner-on-a-tictactoe-game)
    - [Cinema Seat Allocation](#cinema-seat-allocation)
    - [Single Number II (XOR)](#single-number-ii-xor)
    - [Single Number III (XOR)](#single-number-iii-xor)
    - [Find the Difference](#find-the-difference)
    - [Remove Duplicate Letters](#remove-duplicate-letters)
    - [Sort Integers by the Number of 1 Bits](#sort-integers-by-the-number-of-1-bits)
    - [Find the Original Array of Prefix XOR](#find-the-original-array-of-prefix-xor)
    - [Unique Length 3 Palindromic Subsequences](#unique-length-3-palindromic-subsequences)
    - [Bitwise AND of Numbers Range](#bitwise-and-of-numbers-range)

## Bit Manipulation
#### Bitwise And
| a | b | a & b |
| --- | --- | ----- |
| 0 | 0 | 0 |
| 1 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 1 | 1 |

#### Bitwise Or
| a | b | a \| b |
| --- | --- | ----- |
| 0 | 0 | 0 |
| 1 | 0 | 1 |
| 0 | 1 | 1 |
| 1 | 1 | 1 |

#### Bitwise Not
| a | ~a | 
| --- | ----- |
| 0 | 1 |
| 1 | 0 |

#### Shift left
So if we have
```
0000 0001

# Left shift three places
(0000 0001 << 3) == 0000 1000
```

#### Shift Right
So if we have
```
0001 0001

# Right shift two places
(0001 0001 >> 2) == 0000 0100 
```

## Bitmask
If an integer is 64 bit, then the bitmask can store 64 different values.

## Set a bit to 1
Set a bit to 1 with given index k
```
mask = mask | (1 << k)
```

## Set a bit to 0
Set a bit to 0 with given index k
```
mask = mask & ~(1 << k)
```

## Check if a bit is 0 or 1
Get a bit, return True iff bit at index k is 1 otherwise False
```
return (mask & (1 << k)) != 0
```

## Examples:
#### [Single Number (XOR)](single_number/description.md)
#### [Maximum Product of Word Lengths](maximum_product_of_word_lengths/description.md)
#### [Number of 1 bits](number_of_1_bits/description.md)
#### [Maximum Length of a Concatenated String with Unique Charaters](maximum_length_of_a_concatenated_string_with_unique_characters/description.md)
#### [Find Winner on a TicTacToe Game](find_winner_on_a_tictactoe_game/description.md)
#### [Cinema Seat Allocation](cinema_seat_allocation/description.md)
#### [Single Number II (XOR)](single_number_II/description.md)
#### [Single Number III (XOR)](single_number_III/description.md)
#### [Find the Difference](./find_the_difference/description.md)
#### [Remove Duplicate Letters](./remove_duplicate_letters/description.md)
#### [Sort Integers by the Number of 1 Bits](./sort_integers_by_the_number_of_1_bits/description.md)
#### [Find the Original Array of Prefix XOR](./find_the_original_array_of_prefix_xor/description.md)
#### [Unique Length 3 Palindromic Subsequences](./unique_length_3_palindromic_subsequences/description.md)
#### [Bitwise AND of Numbers Range](./bitwise_AND_of_numbers_range/description.md)
#### [Minimum Number of Operations to Make Array XOR Equal to K](./minimum_number_of_operations_to_make_array_xor_equal_to_k/description.md)
#### [Score After Flipping Matrix](./score_after_flipping_matrix/description.md)