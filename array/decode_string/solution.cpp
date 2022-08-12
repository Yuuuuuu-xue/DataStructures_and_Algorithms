#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  string repeat(string s, int numRepeat) {
    string curr = "";
    for (int i = 0; i < numRepeat; i++) curr += s;
    return curr;
  }

  string decodeString(string s, int *i) {
    string curr = "";
    int j = *i;
    // If only contains plain lower case letters
    if (97 <= s[j] && s[j] <= 122) {
      while (97 <= s[j] && s[j] <= 122) curr += s[j++];
      *i = j;
      return curr;
    } else {
      // Contains numbers
      string currNum = "";
      while (s[j] != '[') currNum += s[j++];
      *i = j + 1;
      // Now currNum contains the info about number of strings to repeat
      while (s[*i] != ']') curr += decodeString(s, i);
      // repeat
      *i += 1;
      return repeat(curr, stoi(currNum));
    }
  }

public:
  string decodeString(string s) {
    int i = 0;
    string o = "";
    while (i < s.size()) o += decodeString(s, &i);
    return o;
  }
};