#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int evalRPN(vector<string>& tokens) {
    stack<int> numStack;
    for (string s : tokens) {
      if (s == "+" || s == "-" || s == "*" || s == "/") {
        int firstNumber = numStack.top(); numStack.pop();
        int secondNumber = numStack.top(); numStack.pop();
        if (s == "+") numStack.push(firstNumber + secondNumber);
        else if (s == "-") numStack.push(secondNumber - firstNumber);
        else if (s == "*") numStack.push(secondNumber * firstNumber);
        else if (s == "/") numStack.push(secondNumber / firstNumber);
      } else {
        numStack.push(stoi(s));
      }
    }
    return numStack.top();
  }
};