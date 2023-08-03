#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  unordered_map<char, vector<char>> m = {
    { '2', {'a', 'b', 'c'} },
    { '3', {'d', 'e', 'f'} },
    { '4', {'g', 'h', 'i'} },
    { '5', {'j', 'k', 'l'} },
    { '6', {'m', 'n', 'o'} },
    { '7', {'p', 'q', 'r', 's'} },
    { '8', {'t', 'u', 'v'} },
    { '9', {'w', 'x', 'y', 'z'} }
  };

public:
  void backtrack(string digits, int i, string& curr, vector<string>& o) {
    // cout << "digits " << digits << ", i " << i << ", curr " << curr << "\n";

    for (char c : m[digits[i]]) {
      // Continue recursion
      curr += c;

      // Build the final string
      if (i + 1 == digits.length()) {
        // cout << "push back: " << curr << "\n";
        o.push_back(curr);
      } else {
        backtrack(digits, i + 1, curr, o);
      }
  
      // Backtrack
      curr.pop_back();
    }
  }

  vector<string> letterCombinations(string digits) {
    vector<string> o;
    if (digits.length() == 0) return o;
    string curr;
    backtrack(digits, 0, curr, o);
    return o;
  }
};