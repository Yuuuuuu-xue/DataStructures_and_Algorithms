#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector<string> output;
    int n = words.size();
    int i = 0;
    while (i < n) {
      string currLine = words[i];
      int currLength = words[i].size();
      i ++;
      int j = i;
      while (j < n && currLength + 1 + words[j].size() <= maxWidth) {
        // + 1 for the at least one space
        currLength += 1 + words[j].size();
        j ++;
      }

      // cout << i << " " << currLength << " " << j << "\n";

      // Reach to the end or it just contain one word
      if (j >= n || i == j) {
        while (i < j) {
          currLine += " " + words[i];
          i ++;
        }
        
        // Justify space to reac h to maxWidth
        currLine += string(maxWidth - currLine.size(), ' ');
      } else {
        // Not the end, need to justify the space
      
        int numEmptySlots = j - (i - 1) - 1;
        int numExtraCharacters = maxWidth - currLength;
        int numSpaces = numExtraCharacters / numEmptySlots;
        int numExtraSpaces = numExtraCharacters % numEmptySlots;

        while (i < j) {
          currLine += string(numExtraSpaces > 0 ? 2 + numSpaces : 1 + numSpaces, ' ');
          numExtraSpaces --;
          currLine += words[i];
          i ++;
        }
      }

      output.push_back(currLine);
    }

    return output;
  }
};