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

