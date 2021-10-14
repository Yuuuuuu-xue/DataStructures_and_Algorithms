DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Hashing](#hashing)
- [Chaining or Closed Addressing](#chaining-or-closed-addressing)

## Hashing
- **Universe of keys U**: is the set of all possible keys
- **Hash table T**: is an array with m positions. Each position is called a **slot** or **bucket**
- **Hash function**: a function, h: U -> {0, 1, 2, ..., m - 1}, maps keys to array position. To access key k, we should check T[h(k)].
- **Collision**: we have two keys x and y where x != y and h(x) == h(y), since |U| > m, collsion is unavoidable.

## Chaining or Closed Addressing
For each slot, we have a linked list. So when collision occurs, we just add it to the linked list.

