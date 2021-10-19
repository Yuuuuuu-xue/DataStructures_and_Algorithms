from typing import *
from collections import defaultdict


class Trie:
    def __init__(self):
        # Each children will be an instance of a Trie
        self.children = defaultdict(Trie)
        self.isWord = False

    def insert(self, word: str) -> None:
        cur = self
        # We travel to the current
        for c in word:
            cur = self.children[c]
        cur.isWord = True

    def search(self, word: str) -> bool:
        cur = self
        for c in word:
            if c not in cur.children:
                return False
            cur = cur.children[c]
        return cur.isWord

    def startsWith(self, prefix: str) -> bool:
        cur = self
        for c in prefix:
            if c not in cur.children:
                return False
            cur = cur.children[c]
        return True





