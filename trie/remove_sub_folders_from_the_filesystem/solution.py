from typing import List

class TrieNode:
    def __init__(self):
        self.path = ''
        self.children = {}
        self.leaf_node = False

class Solution:
    def get_leaf_nodes(self, trie, leaf_nodes):
        if trie.leaf_node:
            # Leaf node
            leaf_nodes.append(trie.path)
            return
        for child in trie.children.values():
            self.get_leaf_nodes(child, leaf_nodes)
            

    def removeSubfolders(self, folder: List[str]) -> List[str]:
        trie = TrieNode()

        for f in folder:
            path = f.split("/")
            curr = trie

            is_subfolder = False

            for p in path:
                if p not in curr.children:
                    curr.children[p] = TrieNode()
                if trie.leaf_node:
                    is_subfolder = True
                    break
                curr = curr.children[p]
            
            if is_subfolder:
                continue
            
            # A valid node, remove all its children
            curr.path = f
            curr.children = {}
            curr.leaf_node = True
        
        # Traverse the trie and collect its leaf node
        leaf_nodes = []
        self.get_leaf_nodes(trie, leaf_nodes)
        return leaf_nodes


