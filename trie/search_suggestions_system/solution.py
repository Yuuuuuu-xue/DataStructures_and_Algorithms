class Trie:
    def __init__(self):
        self.children = {}
        self.words = []
    
    def add_word(self, word: str):
        curr = self
        for c in word:
            if c not in curr.children:
                curr.children[c] = Trie()
            curr = curr.children[c]
            if len(curr.words) < 3:
                curr.words.append(word)

class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        products.sort()
        trie = Trie() 

        for product in products:
            trie.add_word(product)
        
        o = []
        curr = trie
        for c in searchWord:
            if c not in curr.children:
                break
            curr = curr.children[c]
            o.append(curr.words)
        
        for _ in range(len(searchWord) - len(o)):
            o.append([])
        
        return o

