#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

struct TrieNode {
  bool isEnd;
  vector<TrieNode *>children;
  TrieNode(): isEnd(false), children(vector<TrieNode *>(26, NULL)) {};
  TrieNode(bool isEnd): isEnd(isEnd), children(vector<TrieNode *>(26, NULL)) {};
};


class Solution {
private:
  TrieNode *dummyNode;  
  int size;
  int m;
  int n;
  vector<string> o;

  void insert(string word) {
    size ++;
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

  vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

  void dfs(vector<vector<char>>& board, TrieNode *root, int i, int j, string curr) {
    root = root->children[board[i][j] - 97];
    if (root != NULL) {
      // Valid cell
      char currChar = board[i][j];
      curr += currChar;
      board[i][j] = ' ';

      if (root->isEnd) {
        // Exactly match
        o.push_back(curr);
        root->isEnd = false;
        size --;
      }

      for (vector<int>& d : directions) {
        int x = i + d[0];
        int y = j + d[1];
        if (size > 0 && x >= 0 && x < m && y >= 0 && y < n && board[x][y] != ' ' && root->children[board[x][y] - 97] != NULL) {
          dfs(board, root, x, y, curr);
        }
      }
      // Backtrack
      board[i][j] = currChar;
    }
  

}

public:
  vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
    dummyNode = new TrieNode();
    m = board.size();
    n = board[0].size();

    for (string word : words) insert(word);

    // Perform a DFS at each cell
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        dfs(board, dummyNode, i, j, "");
      }
    }
    return o;
  }
};