#include <bits/stdc++.h>

using namespace std;

struct TrieNode {
  bool isEnd;
  vector<TrieNode *>children;
  TrieNode(): isEnd(false), children(vector<TrieNode *>(26, NULL)) {};
  TrieNode(bool isEnd): isEnd(isEnd), children(vector<TrieNode *>(26, NULL)) {};
};

class WordDictionary {
private:
  TrieNode *dummyNode;
  int maxLength;

public:
  WordDictionary() {
    dummyNode = new TrieNode();
    maxLength = 0;
  }
  
  void addWord(string word) {
    maxLength = max(maxLength, (int)word.size());
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
    if (word.size() > maxLength) return false;
    TrieNode *curr = dummyNode;
    
    // DFS
    stack<pair<int, TrieNode *>> s;
    s.push(make_pair(0, dummyNode));
    while (!s.empty()) {
      pair<int, TrieNode *> t = s.top();
      s.pop();
      if (t.first == word.size()) {
        if (t.second->isEnd) {
          return true;
        } else {
          continue;
        }
      }
      // If we have a character
      if (word[t.first] != '.') {
        // If we do not have this character
        // We should not return false here since we may have a case for searching 'a.c', if no 'aac', should not return
        // false because we could also try for 'abc'.
        if (t.second->children[word[t.first] - 97] == NULL) continue;
        // Append the next node into stack
        s.push(make_pair(t.first + 1, t.second->children[word[t.first] - 97]));
      } else {
        // . then push all the children
        for (int i = 0; i < 26; i++) {
          if (t.second->children[i] != NULL) s.push(make_pair(t.first + 1, t.second->children[i]));
        }
      }
    }
    return false;
  }
};

