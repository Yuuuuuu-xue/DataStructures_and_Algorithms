#include <bits/stdc++.h>

using namespace std;

struct TrieNode {
  bool isEnd;
  vector<TrieNode *>children;
  TrieNode(): isEnd(false), children(vector<TrieNode *>(26, NULL)) {};
  TrieNode(bool isEnd): isEnd(isEnd), children(vector<TrieNode *>(26, NULL)) {};
};

class Trie {
private:
  TrieNode *dummyNode;

public:
  Trie() {
    dummyNode = new TrieNode();
  }
  
  void insert(string word) {
    // c - 97 is the index
    TrieNode *curr = dummyNode;
    for (char c : word) {
      if (curr->children[c - 97] == NULL) {
        // No this entry
        curr->children[c - 97] = new TrieNode();
      }
      curr = curr->children[c - 97];
    }
    // curr is now at the end of the last character
    curr->isEnd = true;
  }
  
  bool search(string word) {
    // Traverse the tree
    TrieNode *curr = dummyNode;
    for (char c : word) {
      if (curr->children[c - 97] == NULL) return false;
      curr = curr->children[c - 97];
    }
    return curr->isEnd;
  }
  
  bool startsWith(string prefix) {
    // Traverse the tree
    TrieNode *curr = dummyNode;
    for (char c : prefix) {
      if (curr->children[c - 97] == NULL) return false;
      curr = curr->children[c - 97];
    }
    // We do not care if any word ends with current character
    return true;
  }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */