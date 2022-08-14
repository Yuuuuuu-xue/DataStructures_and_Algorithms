#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  // Use for memorization
  unordered_map<string, vector<int>> m;
  vector<int> compute(string expression, int left, int right) {
    string memorizationKey = to_string(left) + " " + to_string(right);
    if (m.find(memorizationKey) != m.end()) return m[memorizationKey];

    vector<int> o;
    for(int mid = left; mid <= right; mid++) {
      // We have an operator
      if (expression[mid] == '+' || expression[mid] == '-' || expression[mid] == '*') {
        // Find the left and right
        vector<int> leftSol = compute(expression, left, mid - 1);
        vector<int> rightSol = compute(expression, mid + 1, right);
        for (int leftNum : leftSol) {
          for (int rightNum : rightSol) {
            if (expression[mid] == '+') o.push_back(leftNum + rightNum);
            else if (expression[mid] == '-') o.push_back(leftNum - rightNum);
            else if (expression[mid] == '*') o.push_back(leftNum * rightNum); 
          }
        }
      }
    }
    // If o is empty, this means no operator, then just a number
    if (o.empty()) {
      o.push_back(stoi(expression.substr(left, right - left + 1)));
    }

    // Memorizate this expression
    m[memorizationKey] = o;
    return o;
  }

public:
  vector<int> diffWaysToCompute(string expression) {
    return compute(expression, 0, expression.size() - 1);
  }
};