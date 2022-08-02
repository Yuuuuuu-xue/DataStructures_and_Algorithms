#include <bits/stdc++.h>

using namespace std;

class Codec {
public:

  // Encodes a list of strings to a single string.
  string encode(vector<string>& strs) {
    string encodedString = "";
    for(string s : strs) {
      encodedString += to_string(s.size()) + "." + s;
    }
    return encodedString;
  }

  // Decodes a single string to a list of strings.
  vector<string> decode(string s) {
    vector<string> decodedStrs;
    int i = 0;
    while (i < s.size()) {
      int dotIndex = s.find(".", i);
      int size = stoi(s.substr(i, dotIndex));
      decodedStrs.push_back(s.substr(dotIndex + 1, size));
      i = dotIndex + 1 + size;
    }
    return decodedStrs;
  }
};
