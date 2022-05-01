## Stack
Click [here](../notes.md) to go back to the notes page.

## Description
Given two strings ```s``` and ```t```, return ```true``` if they are equalw when both are typed into empty texte editors. ```#``` means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

## A simple solution
Use stack to calculate both strings, when ```#```, we pop from the stack iff it is not empty. Push to stack if it is other characters. Resulting in ***O(n)*** For both time and space complexity.

## Solution
- [Java Solution](./backspace_string_compare.java)