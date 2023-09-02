#include <bits/stdc++.h>

using namespace std;

struct TrieNode {
  unordered_map<char, TrieNode*> next;
  bool isEnd;

  TrieNode(): isEnd(false){};
};

class Trie {
public:
  // root node with dummy value
  TrieNode* root = new TrieNode();
  
  void reverseInsert(string word) {
    TrieNode *curr = root;
    for (int i = word.size() - 1; i >= 0; i--) {
      if (curr->next.find(word[i]) == curr->next.end()) {
        curr->next[word[i]] = new TrieNode();
      }
      curr = curr->next[word[i]];
    }
    curr->isEnd = true;
  }
};

class Solution {
public:
  int minExtraChar(string s, vector<string>& dictionary) {
    Trie trie;
    for (string& word : dictionary) {
      trie.reverseInsert(word);
    }

    int n = s.size();
    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++) {
      dp[i] = 1 + dp[i - 1];

      TrieNode *curr = trie.root;
      for (int j = i; j >= 1; j--) {
        char c = s[j - 1];
        
        // Node does not exist
        if (curr->next.find(c) == curr->next.end()) {
          break;
        }

        curr = curr->next[c];
        
        // A word exists in the dictionary
        if (curr->isEnd) {
          dp[i] = min(dp[i], dp[j - 1]);
        }
      }
    }

    return dp[n];
  }
};


