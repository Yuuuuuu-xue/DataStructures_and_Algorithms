#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int i = 0;
    int j = 0;
    int currI = 0;
    int currJ = 0;
    while (i < word1.size() && j < word2.size()) {
      if (currI == word1[i].size()) {
        currI = 0;
        i ++;
      }

      if (currJ == word2[j].size()) {
        currJ = 0;
        j++;
      }

      if (i >= word1.size() || j >= word2.size()) {
        break;
      }

      if (word1[i][currI] != word2[j][currJ]) {
        return false;
      }
      currI ++;
      currJ ++;
    }

    return i >= word1.size() && j >= word2.size();
    
  }
};