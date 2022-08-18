#include <bits/stdc++.h>

using namespace std;

class Logger {
private:
  unordered_map<string, int> m;

public:
  Logger() {
    m.clear();
  }

  bool shouldPrintMessage(int timestamp, string message) {
    if (m.find(message) == m.end() || m[message] + 10 <= timestamp) {
      m[message] = timestamp;
      return true;
    }
    return false;
  }
};