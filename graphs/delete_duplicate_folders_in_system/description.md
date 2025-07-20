## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1948

## Problem
Due to a bug, there are many duplicate folders in a file system. Yo uare given a 2D array `paths`, where `paths[i]` is an array representing an absolute path to the `ith` folder in the file system.

- For example, `["one", "two", "three"]` represents the path `"/one/two/three"`.

Two folders (not necessarily on the same level) are identical if they contain the same non-empty set of identical folders and underlying subfolder structure. The folders do not need to be at the root level to be identical. If two or more folders are identical, then mark the folders as well as all their subfolders.

- For example, folders `"/a"` and `"/b"` in the file structure below are identical. They (as well as their subfolders) should all be marked.
    - "/a"
    - "/a/x"
    - "/a/x/y"
    - "/a/z"
    - "/b"
    - "/b/x"
    - "/b/x/y"
    - "/b/z"
- However, if the file structure also included the path "/b/w", then the folders "/a" and "/b" would not be identical. Note that "/a/x" and "/b/x" would still be considered identical even with the added folder.

Once all the identical folders and their subfolders have been marked, the file system will delete all of them. The file system only runs the deletion once, so any folders that become identical after the initial deletion are not deleted.

Return the 2D array `ans` containing the paths of the remaining folders after deleting all the marked folders. The paths may be returned in any order.

## Example
```
Input: paths = [["a"], ["c"], ["a", "b"], ["c", "d"], ["a", "b", "x"], ["a", "b", "x", "y"], ["w"], ["w", "y"]]
Output: [["c"], ["c", "b"], ["a"], ["a", "b"]]
Explanation: The folder "/a/b/x" and "/w" and their subfolders are marked for deletion because they both contain an empty folder named "y".
```

## Key Idea
We will basically build the tree similar to a trie structure where each folder is a node in the tree. Their subfolders are the children of the node.

Now, given a folder, we need a way to hash the folder into a string so we can track the number of folders that are duplicate.

The simpliest thing to track of a given folder is to concatenate its children (sorted by names). i.e. if we have /a/b/c and /a/x. Then the hash value of folder a will be based on its subfolders i.e. "b(c)x". Any folder with this hash are considered as the duplicate.

At the end, we can simply loop over the tree and build the output where the node does not have counter >= 2 (consider duplicate).

## Complexity Analysis
- Runtime Complexity:
    - Build the tree: O(m) where m is the total folder name length
    - Serailize DFS: O(n)
    - DFS traversal to build the output: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)