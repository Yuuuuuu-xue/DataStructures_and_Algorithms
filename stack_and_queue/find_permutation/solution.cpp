#include <iostream>
#include <vector>
#include <algorithm>
#include <stack> 

using namespace std;

class Solution {
public:
  vector<int> findPermutation(string s) {
    stack<int> stack;
    int curr = 1;
    vector<int> o(s.size() + 1);
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'I') {
        o[i] = curr++;
        while (!stack.empty()) { 
          o[stack.top()] = curr++;
          stack.pop();
        }
      } else {
        stack.push(i);
      }
    }
    
    // If last element is 'I', then insert all the D first
    int lastElement;
    // If last element is 'D', then insert the last element first
    if (s[s.size() - 1] == 'I') {
      lastElement = -1;
    } else {
      lastElement = curr++;
    }
    // If we have more D's group
    while (!stack.empty()) { 
      o[stack.top()] = curr++;
      stack.pop();
    }
    if (lastElement == -1) {
      o[s.size()] = curr++;
    } else {
      o[s.size()] = lastElement;
    }

    return o;
  }
};


int main() {
  Solution s = Solution();

  for (int i : s.findPermutation("DI")) cout << i << ' ';
  cout << "\n";
  for (int i : s.findPermutation("D")) cout << i << ' ';
  cout << "\n";
  for (int i : s.findPermutation("I")) cout << i << ' ';
  cout << "\n";
  for (int i : s.findPermutation("DDIIDI")) cout << i << ' ';
  cout << "\n";
  return 0;
}

