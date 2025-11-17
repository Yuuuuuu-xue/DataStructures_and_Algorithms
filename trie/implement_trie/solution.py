class TrieNode:
    def __init__(self):
        self.map = {}
        self.endsWithWord = False


class Trie:

    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        curr = self.root
        for c in word:
            if c not in curr.map:
                curr.map[c] = TrieNode()
            curr = curr.map[c]
        curr.endsWithWord = True

    def search(self, word: str) -> bool:
        curr = self.root
        for c in word:
            if c not in curr.map:
                return False
            curr = curr.map[c]
        return curr.endsWithWord

    def startsWith(self, prefix: str) -> bool:
        curr = self.root
        for c in prefix:
            if c not in curr.map:
                return False
            curr = curr.map[c]
        return True
        
# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)