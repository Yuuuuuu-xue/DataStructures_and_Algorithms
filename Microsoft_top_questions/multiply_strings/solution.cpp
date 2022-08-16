#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string multiply(string num1, int digit) {
    string o = "";
    int n = num1.size();
    int i = n - 1;
    int carry = 0;
    // If i is 2, so three digits 123 * digit, then if we at the last digit 3
    // it should be the number * 10^x where x is num1.size() - 1 - i.
    while (i >= 0) {
      int temp = (num1[i] - 48) * digit + carry;
      carry = temp / 10;
      o += temp % 10 + 48;
      i --;
    }

    if (carry > 0) {
      o += carry + 48;
    }

    // Reverse the string
    reverse(o.begin(), o.end());
    return o;
  }

  string add(string num1, string num2) {
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    bool isCarry = false;
    string o = "";
    while (i >= 0 && j >= 0) {
      // Add two digits
      int temp = num1[i] - 48 + num2[j] - 48 + isCarry;
      if (temp >= 10) {
        o += temp - 10 + 48;
        isCarry = true;
      } else {
        o += temp + 48;
        isCarry = false;
      }
      i --;
      j --;
    }
    // If num1 is not empty
    while (i >= 0) {
      int temp = num1[i] - 48 + isCarry;
      if (temp >= 10) {
        o += temp - 10 + 48;
        isCarry = true;
      } else {
        o += temp + 48;
        isCarry = false;
      }
      i --;
    }

    while (j >= 0) {
      int temp = num2[j] - 48 + isCarry;
      if (temp >= 10) {
        o += temp - 10 + 48;
        isCarry = true;
      } else {
        o += temp + 48;
        isCarry = false;
      }
      j --;
    }

    if (isCarry) {
      o += '1';
    }

    reverse(o.begin(), o.end());
    return o;
  }

  string getMissingZero(string num, int numZeroes) {
    for (int i = 0; i < numZeroes; i++) num.push_back('0');
    return num;
  }

  string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") {
      return "0";
    }
    string o = "";
    int m = num2.size();
    for (int i = m - 1; i >= 0; i--) {
      o = add(o, getMissingZero(multiply(num1, num2[i] - 48), m - 1 - i));
    }
    return o;
  }
};
