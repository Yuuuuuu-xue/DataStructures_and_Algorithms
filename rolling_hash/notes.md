DataStructures_and_Algorithmsed
Click [here](../README.md) to main page

## Rolling Hash
A rolling hash is a hash function that is used to efficiently compute a hash value for a sliding window of data. It is commonly used in computer science and computational biology, where it can be used to detect approximate string matches, find repeated substrings, and perform other operations on sequence of data.

The idea behind a rolling hash is to compute the hash value for a fixed-size window of data, then move the window one position at a time and re-compute the hash value. By using a sliding window, the rolling hash can avoid re-computing the hash value from scratch for each position, which can be time-consuming for larger data sets. Instead, the rolling hash only needs to update the hash value for the new data that is added or removed from the window.

Let's say we have a string "hello world" and we want to search for the substring "world". We can use Rabin-Karp hash function to compute the hash value of each possible substring of length 5 and compare it with the hash value of target substring "world".

Rabin-Karp rolling hash function might use the following formula to compute the hash value of a substring: hash = (c1 * a^(k - 1) + c2 * a^(k - 2) + ... + ck ^ a^0) mod m where c1, ..., ck are the ASCII values of the characters in the substring, a is a prime number, k is the length of the substring, and m is a larger prime number.

## Formula
hash = (c1 * a^(k - 1) + c2 * a^(k - 2) + ... + ck ^ a^0) mod m

current_hash = (current_hash * base + ord(s[i])) % mod

Ininitial: current_hash = 0
i = 0: current_hash = ord(s[i]) = ci * a^0
i = 1: current_hash = ord(s[i - 1]) * a^1 + ord(s[i])
i = 2: current_hash = ord(s[i - 2]) * a^2 + ord(s[i - 1]) * a^1 + ord(s[i])

## Rabin-Karp Hash Function
```
from typing import List


def rolling_hash(s: str, window_size: int, base: int = 26, mod: int = 10**9 + 7) -> List[int]:
    """
    Calculates the rolling hash values of all substrings of length window_size in string s.
    Uses the polynomial rolling hash algorithm with base and mod as constants.

    :param s: the input string
    :param window_size: the size of the rolling window
    :param base: the base for the polynomial hash function, better be a prime
    :param mod: the modulus for the polynomial hash function, better be a larger prime
    :return
    """

    n = len(s)
    power = [1] * (n + 1)
    hash_values = [0] * (n - window_size + 1)

    # Precompute the powers of the
    # base modulo the mod
    for i in range(1, n + 1):
        power[i] = (power[i - 1] * base) % mod

    # Compute the hash value of
    # the first window
    current_hash = 0
    for i in range(window_size):
        current_hash = (current_hash * base + ord(s[i])) % mod

    hash_values[0] = current_hash
    
    # Compute the hash values of the
    # rest of the substrings
    for i in range(1, n - window_size + 1):

        # Remove the contribution of the
        # first character in the window
        current_hash = (
            current_hash - power[window_size - 1] * ord(s[i - 1])) % mod

        # Shift the window by one character
        # and add the new character
        # to the hash
        current_hash = (current_hash * base + ord(s[i + window_size - 1])) % mod

        hash_values[i] = current_hash

    return hash_values
```

## Prefix and Suffix
- forward_hash = (forward_hash * hash_base + self.val(current_char)) % mod_value
- reverse_hash = (reverse_hash + self.val(current_char) * power_value) % mod_value
- substring hash = `hash(s[i:j]) = (vals[j] - valus[i] * power[j - i]) % mod`


## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Application
- Approximate string matching: can be used to quickly identify two strings that are likely to be similar
- Repeated substring detection: identify repeated substrings in a long sequence of data

## Advantages
- Speed
- Memory
- Partial match

## Disadvantages
- Hash collisions: rolling hash can produce hash collisions, which meant that two different substrings can have the same hash value. This can lead to false matches and incorrect results
- Window size: requires a fixed window size, which means that it may not be suitable for all types of strings


## Examples
#### [Shortest Palindrome](./shortest_palindrome/description.md)
#### [Longest Happy Prefix](./longest_happy_prefix/description.md)
#### [Sum of Scores of Built Strings](./sum_of_scores_of_built_strings/description.md)