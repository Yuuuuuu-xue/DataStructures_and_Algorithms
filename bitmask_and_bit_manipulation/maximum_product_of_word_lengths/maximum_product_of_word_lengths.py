from typing import *
from collections import defaultdict


def maxProduct(words: List[str]) -> int:
    m = defaultdict(int)
    n = len(words)
    output = 0

    # Construct the bitmask
    for word in words:
        for c in word:
            # Set the bit to 1
            m[word] |= 1 << (ord(c) - 97)

    for i in range(n):
        for j in range(i + 1, n):
            # If they do not share the common part
            if m[words[i]] & m[words[j]] == 0:
                output = max(output, len(words[i] * len(words[j])))
    return output


if __name__ == '__main__':
    test_words = ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
    print(16 == maxProduct(test_words))

