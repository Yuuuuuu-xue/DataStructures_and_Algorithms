#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morseCode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> seen;
    for (string word : words) {
      string encodedString = "";
      for (char c : word) {
        encodedString.append(morseCode[c - 97]);
      }
      seen.insert(encodedString);
    }
    return seen.size();
  }
};