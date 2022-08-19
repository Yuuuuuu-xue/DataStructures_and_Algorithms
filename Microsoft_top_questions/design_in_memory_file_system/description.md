## LeetCode Question
Hard 588

## Description
Design a data structure that simulates an in-memory file system.

Implement the FileSystem class:
- `FileSystem()` initializes the object of the system
- `List<String> ls(String path)`
  - if `path` is a file path, return a list that only contains this file's name.
  - if `path` is a directory path, returns the list of file and directory names in this directory
  - The answer should in lexicographic order
- `void mkdir(String path)` makes a new directory according to the given `path`. The given directory path does not exist. If the middle directories in the path do not exist, you should create them as well.
- `void addContentToFile(String filePath, String content)`
  - if `filePath` does not exist, creates that file containing given `content`
  - if `filePath` already exists, appends the given `content` to original content
- `String readContentFromFile(String filePath)` returns the content in the file at `filePath`.

## Example
```
Input:
["FileSystem", "ls", "mkdir", "addContentToFile", "ls", "readContentFromFile"]
[[], ["/"], ["/a/b/c"], "/a/b/c/d", "hello", ["/"], ["/a/b/c/d"]]

Output:
[null, [], null, null, ["a"], "hello"]
```

## Key Idea
Note we will move along the path name in between '/', then we can build a `Trie` data structure that each node is a file/directory name and we move down a node when we see a '/'. We can make a node to be either directory node or a file where file will have the content and directory node will contain the children.

## Complexity Analysis
- Time Complexity for `ls` will be O(n * h * k lg k) where `n` is the input string length and `h` is the height of the Trie and `k` is the number of entries in the current directory (we need to sort them)
- Time Complexity for `mkdir` will be O(n * h)
- Time Complexity for addContentToFile will be O(n * h)
- Time Complexity for readContentFromFile will be O(n * h)

## Solution
- [C++](solution.cpp)