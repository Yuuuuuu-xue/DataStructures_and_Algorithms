## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Description
Given two strings ```s``` and ```t```, return ```true``` if they are equalw when both are typed into empty texte editors. ```#``` means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

## A simple solution
Use stack to calculate both strings, when ```#```, we pop from the stack iff it is not empty. Push to stack if it is other characters. Resulting in ***O(n)*** For both time and space complexity.

We can also use a two pointer solution to start from back, then when we see a `#`, we increment the pointer by two because it can delete the previous character, but if we see another `#`, we can remove another character, and thus, we will continue to update the pointer until we reach to index `i` that we finish deleting. The same argument for `j`, then if `s[i] != t[j]`, we return `false` otherwise `true`.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(1) if two pointer, O(n + m) if stack

## Solution
- [Java Solution](./backspace_string_compare.java)
- [C++](./solution.cpp)