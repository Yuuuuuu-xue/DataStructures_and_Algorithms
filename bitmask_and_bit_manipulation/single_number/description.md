## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## Problem
Given a **non empty** array of integers nums, every element appears twice except for one. Find that one.

## Simple Solution
We can simply use a hash set to keep track of visited items.
```
def singleNumber(nums: List[int]) -> int:
    visited = set()
    for item in nums:
        if item not in visited:
            visited.remove(item)
        else:
            visited.add(item)
    # By assumption, we have only one unique element left
    return visited.pop()
```
But this solution takes $\mathcal{O}(n)$ space. Is there any solution with $\mathcal{O}(1)$ space while the time complexity stays same?

## Bit Manipulation Solution
Notice:
- If we take XOR of zero and some bit, we will return the same bit. For example, $a \oplus 0 = a$.
- If we take XOR of two same bits, we will return zero. For example, $a \oplus a = 0$.
- And it follows the transitive rule. For example, $a \oplus b \oplus a = (a \oplus a) \oplus b = 0 \oplus b = b$

So the key idea is to XOR the item we have visited before. By assumption, every element appears twice except for one, we can keep XOR the number and number that appear twice will result in 0. Eventually, we have the unique item.

## Solution
- [Python Solution](single_number.py)
- [Java Solution](single_number.java)