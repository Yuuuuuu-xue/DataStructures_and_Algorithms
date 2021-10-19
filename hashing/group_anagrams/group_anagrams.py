from typing import *
from collections import defaultdict


def groupAnagrams(words: List[str]) -> List[List[str]]:
    m = defaultdict(list)
    for word in words:
        sorted_word = "".join(sorted(word))
        m[sorted_word].append(word)
    return list(m.values())


if __name__ == '__main__':
    test_words = ["eat", "tea", "tan", "ate", "nat", "bat"]
    print(groupAnagrams(test_words))

