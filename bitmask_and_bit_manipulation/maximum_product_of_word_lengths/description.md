## Bitmask
Click [here](../notes.md) to go back to the notes page.

## Problem
Given a string array *words*, return the maximum value of length(words[i]) * length(words[j]) where two words **do not share common letters**. If no such two words exist, return 0.

## Example
```
Input: words = ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
Output: 16

Explanation: the two words can be "abcw" and "xtfn"
```

## Key Idea
For each word in words, since they only contain lower case English letters, we will assign a bit mask to each word with length 26. So the rightmost bit is 0 if this word doesn't contain a character 'a' and 1 if this word contains a character 'a'. 

For example, if we have the word "aaabe", we will have it's corresponding bit mask be 0 ... 010011b. 

Thus we can simply loop over all the possible pair and easily check if two words do not share any common characters. We can simply use **bitwise and** and check if the result is 0 or not. If it is 0 then they do not share any common characters. 

To translate a charater to bitmask, we can use **ord(char) - 97** since 97 is the ascii code of 'a' and use 1 << a to get the required position. And we can simply use **bitwise or** to update this bit to 1. 

## Solution:
- [Python Solution](maximum_product_of_word_lengths.py)