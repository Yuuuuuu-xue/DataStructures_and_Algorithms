#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    // Check if endWord in the wordList or not
    unordered_set<string> unseen;
    for (string &word : wordList) {
      unseen.insert(word);
    }
    if (unseen.find(endWord) == unseen.end()) {
      return 0;
    }
    
    // Build the map
    unordered_map<string, vector<string>> m;
    for (string &word : wordList) {
      string temp = word;
      for (int i = 0; i < word.size(); i++) {
        char prevChar = temp[i];
        temp[i] = '*';

        if (m.find(temp) == m.end()) {
          m[temp] = { word };
        } else {
          m[temp].push_back(word);
        }

        // backtrack
        temp[i] = prevChar;
      }
    }

    // Run bfs
    vector<string> q;
    q.push_back(beginWord);
    int level = 0;
    unseen.erase(beginWord);

    while (q.size() > 0) {
      vector<string> nextQ;
      level ++;
      for (string &word : q) {
        if (word == endWord) {
          return level;
        }
        string temp = word;
        for (int i = 0; i < word.size(); i++) {
          char prevChar = word[i];
          temp[i] = '*';

          if (m.find(temp) != m.end()) {
            // Neighbor words
            for (string &neighbor : m[temp]) {
              if (unseen.find(neighbor) != unseen.end()) {
                unseen.erase(neighbor);
                nextQ.push_back(neighbor);
              }
            }
          }

          // Backtrack
          temp[i] = prevChar;
        }
      }

      q = nextQ;
    }

    return 0;
  }
};