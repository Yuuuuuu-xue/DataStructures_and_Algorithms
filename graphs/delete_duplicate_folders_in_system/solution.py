from typing import List
from collections import defaultdict

class TreeNode:
    def __init__(self, folder):
        self.folder = folder
        self.hash = ""
        self.children = {}

class Solution:

    def deleteDuplicateFolder(self, paths: List[List[str]]) -> List[List[str]]:
        root = TreeNode("dummy")

        for path in paths:
            curr = root
            for folder in path:
                if folder not in curr.children:
                    curr.children[folder] = TreeNode(folder)
                curr = curr.children[folder]
        
        folder_count = defaultdict(int)
        
        def build_folder_count(curr: TreeNode):
            if len(curr.children) == 0:
                # Leaf node
                curr.hash = ""

            children_hash = []
            for key, child_node in sorted(curr.children.items()):
                child_hash = build_folder_count(child_node)
                children_hash.append(f'{key}({child_hash})')
            curr.hash = "".join(children_hash)
            folder_count[curr.hash] += 1
            return curr.hash

        build_folder_count(root)

        o = []
        curr_path = []

        def traverse_and_skip_duplicate(curr: TreeNode):
            # Need to check curr.children because folder_count[""] returns the number of leaf node
            if curr.children and folder_count[curr.hash] >= 2:
                return
            
            curr_path.append(curr.folder)
            o.append(curr_path[:])

            for key in curr.children:
                traverse_and_skip_duplicate(curr.children[key])
            # Backtrack
            curr_path.pop()
        
        for key in root.children:
            traverse_and_skip_duplicate(root.children[key])
        
        return o

