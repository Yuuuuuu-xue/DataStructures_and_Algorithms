#include <bits/stdc++.h>

using namespace std;

struct TrieNode {
  vector<TrieNode *>children;
  unordered_set<string> sentences;
  // Index 26 will be the space character
  TrieNode(): children(vector<TrieNode *>(27, NULL)) {};
};

class AutocompleteSystem {
private:
  TrieNode *dummy;
  TrieNode *curr;
  unordered_map<string, int> m;
  string currWord;

public:
  AutocompleteSystem(vector<string>& sentences, vector<int>& times) {
    dummy = new TrieNode();

    for (int i = 0; i < sentences.size(); i++) {
      m[sentences[i]] += times[i];
      curr = dummy;
      // Build the trie
      for (char c : sentences[i]) {
        int childrenI = c == ' ' ? 26 : c - 97;
        if (curr->children[childrenI] == NULL) {
          curr->children[childrenI] = new TrieNode();
        }
        curr = curr->children[childrenI];
        curr->sentences.insert(sentences[i]);
      }
    };
    curr = dummy;
    currWord = "";
  }

  struct Comparator {
    bool operator()(const pair<string, int>& p1, const pair<string, int>& p2) {
      // return false if first goes closer to the top
      if (p1.second == p2.second) {
        return p1.first > p2.first;
      } else {
        return p1.second < p2.second;
      }
    }
  };
  
  vector<string> input(char c) {
    if (c != '#') {
      currWord += c;
      // If not a special character, then move a trie node by 1.
      int childrenI = c == ' ' ? 26 : c - 97;
      if (curr->children[childrenI] == NULL) {
        // No match, return empty
        curr->children[childrenI] = new TrieNode();
        curr = curr->children[childrenI];
        return {};
      } else {
        curr = curr->children[c == ' ' ? 26 : c - 97];
        // Match
        priority_queue<pair<string, int>, vector<pair<string, int>>, Comparator> pq;
        for (string s : curr->sentences) pq.push(make_pair(s, m[s]));
        
        // Find top 3
        int i = 0;
        vector<string> o;
        while (!pq.empty() && i++ < 3) {
          o.push_back(pq.top().first);
          pq.pop();
        }
        return o;
      }
    } else {
      // Already construct the trie, need to add each word into the TrieNode and update m
      m[currWord] ++;
      curr = dummy;
      for (char c : currWord) {
        curr = curr->children[c == ' ' ? 26 : c - 97];
        curr->sentences.insert(currWord);
      }

      // Reset the variables
      currWord = "";
      curr = dummy;

      return {};
    }
  }
};

/**
 * Your AutocompleteSystem object will be instantiated and called as such:
 * AutocompleteSystem* obj = new AutocompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */