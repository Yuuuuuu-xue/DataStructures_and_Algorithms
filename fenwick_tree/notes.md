DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Problem](#problem)
- [Simple Solution](#simple-solution)
- [Fenwick Tree (Binary Indexed Tree)](#fenwick-tree-binary-indexed-tree)
- [getSum](#getsum)
- [update](#update)
- [Runtime Complexity](#runtime-complexity)
- [Examples:](#examples)
    - [Fenwick Tree Implementation](#fenwick-tree-implementation)

## Problem
We have an array $arr[0 \dots n - 1]$ and we would like to
1. Compute the sum of 0 to i elements
2. Modify the value of a specific element, $arr[i] = x$ where $0 \leq i \leq n - 1$

Thus we have two operations
1. getSum(i)
2. update(i, x)

And we may call this two operations many times!

## Simple Solution
- A simple solution is to run a loop from 0 to i and calculate the sum, takes $\mathcal{O}(n)$ and set $arr[i] = x$ in $\mathcal{O}(1)$.
- Another way to do is to use an array to store the sum of first $i^{th}$ elements at the $i^{th}$ index. Then calculate the sum is in $O(1)$ but update the specific element is in $\mathcal{O}(n)$.

Fenwick tree provides both operations in $\mathcal{O}(\lg n)$.

## Fenwick Tree (Binary Indexed Tree)
Fenwick Tree, also known as Binary Indexed Tree, is represented as an array. 
- ach node stores the sum of some elements of the input array
- The size of Binary Indexed Tree array is equal to the size of the input array, but **index 1 based**.
- We will first initialize all the elements of the array to 0.

The **key idea** of Fenwick Tree is that all positive integers can be represented as the **sum of powers of 2**. For example, 19 can be represented as $16 + 2 + 1 = 2^4 + 2^1 + 2^0$. 

It's important that we assume update(i, x), **$x \geq 0$**.

## getSum
To implement the getSum(i), we will
1. Initialize otuput sum = 0, current index = i + 1
2. Repeat until current index $\leq 0$
   1. Add BITree Array[index] to the output sum
   2. Go the the parent node, by removing the last bit of current index. We can achieve it by **index = index - (index & (-index))**. For example, if i = 10 = 1010b and its parent is 8 = 1000b, so we want to remove the last bit (leftmost) that is equal to 1. Since -i = -10 = 11010b, then 1010b & 10110b = 00010b and 1010 - 00010b = 10 - 8 = 2.
3. Return the sum

For example, if we have 19 and it can be represented as $16 + 2 + 1 = 2^4 + 2^1 + 2^0$ and its binary representation is 10011b. Then we we will add the value on BITree.array[10011] + BITree.array[10010] + BITree.array[10000]. Each time we set the rightmost bit to 0.

## update
To implement uodate(i, x), we will
1. Initialize current index to i + 1 
2. Repeat until current index > n = BITree.array.size
   1. Add x to BITree[index]
   2. Go to the parent of BITree[index] by incrementing the last bit that is equal to 0 to 1 of the current index. WE can achieve it by **index = index + (index & (-index))**.

## Runtime Complexity
Since number of bits of an integer is $\mathcal{O}(\lg n)$, thus we will traverse at most $\mathcal{O}(\lg n)$ nodes in both getSum and update operations.

## Examples:
#### [Fenwick Tree Implementation](BIT_implementation/description.md)


