## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Hard 68

## Problem
Given an array of strings `words` and a width `maxWidth`, format the text such that each line has exactly `maxWidth` characters and is fully (left and right) justified.

You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces `' '` when necessary so that each line has exactly `maxWidth` characters.

Extra spaces between words should be distribued as evenly as possible. If the number of spaces on a line does not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.

For the last line of text, it should be left-justfied, and no extra space is inserted between words.

Note
- A word is defined as a character sequence consisting of non-space characters only
- Each word's length is guaranteed to be greather than `0` and not exceed `maxWidth`
- The input array `words` contains at least one word

## Example
```
Input: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16
Output:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]

Input: words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16
Output:
[
  "What   must   be",
  "acknowledgment  ",
  "shall be        "
]
Explanation: Note that the last line is "shall be    " instead of "shall     be", because the last line must be left-justified instead of fully-justified.
Note that the second line is also left-justified because it contains only one word.
```

## Key Idea
We will solve this question via Greedy algorithm. The greedy strategy is already given in the question. We should try to insert as many words as we can, until we cannot insert any words, then there is two cases:
1. We finish all the words, then we should insert spaces at the end to reach to the `maxWidth`
2. We do not finish all the words, then we need to justify spaces.

To justify spaces, we need to know how many empty slots between each word, i.e. `x`, then need to figure out how many extra spaces we need to justify. We can use `extraLength / x` to get the extra spaces for each empty slot. Then while `extraLength % x`, we should insert one more space to make it evenly distributed as possible.

## Complexity Analysis
- Runtime Complexity: O(n * m) where n = number of words and m = max lenght of word
- Space Complexity: O(n * m)

## Solution:
- [C++](solution.cpp)