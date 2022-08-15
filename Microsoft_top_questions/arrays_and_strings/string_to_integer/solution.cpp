#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int myAtoi(string s) {
    int i = 0;
    
    // Ignore the leading space
    while (i < s.size() && s[i] == ' ') i++;
    
    // Find the sign
    int mul = 1;
    if (i < s.size()) {
      if (s[i] == '-') {
        mul = -1;
        i ++;
      } else if (s[i] == '+') {
        i ++;
      }
    }

    // Ignore the leading 0
    while (i < s.size() && s[i] == '0') i++;

    // Find the digits:
    int j = i - 1;
    while (j + 1 < s.size() && isdigit(s[j + 1])) j ++;

    // if j < i, then no valid digit
    if (j < i) return 0;

    // now s[i:j+1] are valid digits, we should build the array.
    // Suppose j = 5, i = 1, 5 digits 123456
      
    // If number of digits > maximum digits (10)
    if (j + 1 - i > 10) {
      // Return the maximum or min
      return mul == 1 ? INT_MAX : INT_MIN;
    }

    // If number of digits < maximum digits (10), then simply build the output
    if (j + 1 - i < 10) {
      int o = 0;
      for (int k = j - i; k >= 0; k--) {
        // cout << k << " " << pow(10, k) << " " << (s[j - k] - 48) << "\n";
        o += pow(10, k) * (s[j - k] - 48);
      }
      return mul * o;
    }

    int o = 0;
    int currDigit = INT_MAX / pow(10, 9);

    // It numbner of digits match exactly the largest integer (10).
    for (int k = j - i; k >= 1; k--) {
      // cout << currDigit << "\n";
      if (currDigit != -1) {
        // We need to make sure the current digit not exceed the maximum limit
        int currNum = s[j - k] - 48;
        if (currNum < currDigit) {
          // Do not need to check rest of digits
          // cout << currNum << " " << currDigit << "\n";
          currDigit = -1;
          o += pow(10, k) * currNum;
        } else if (currNum > currDigit) {
          // Exceed the digit, return the max or min
          return mul == 1 ? INT_MAX : INT_MIN;
        } else {
          // Need to check the next digit
          o += pow(10, k) * currNum;
          currDigit = (INT_MAX % (int)pow(10, k)) / pow(10, k - 1);
        }
      } else {
        o += pow(10, k) * (s[j - k] - 48);
      }
    }
    
    // cout << currDigit << "\n";
    // We also need to check last digit
    if (currDigit != -1) {
      // Check for the last digit exceed the maximum or not
      int currNum = s[j] - 48;

      // If last digit is 8 or 9 (exceed), then we return the -MIN directly since all the digits matched
      if (currNum >= 9) return mul == 1 ? INT_MAX : INT_MIN;
      
      if (currNum > currDigit) {
        return mul == 1 ? INT_MAX : INT_MIN;
      }
      o += currNum;
    } else {
      o += s[j] - 48;
    }
    return o * mul;
  }
};