#include <bits/stdc++.h>

using namespace std;

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 */
class MountainArray {
public:
  int get(int index);
  int length();
};


class Solution {
public:
  int findInMountainArray(int target, MountainArray &mountainArr) {
    int left = 0;
    int n = mountainArr.length();
    int right = n - 1;
    while (left < right) {
      int mid = (left + right) / 2;
      if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }

    int i = left;

    left = 0;
    right = i;
    while (left <= right) {
      int mid = (left + right) / 2;
      int midValue = mountainArr.get(mid);
      if (midValue == target) {
        return mid;
      } else if (midValue < target) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    left = i + 1;
    right = n - 1;
    while (left <= right) {
      int mid = (left + right) / 2;
      int midValue = mountainArr.get(mid);
      if (midValue == target) {
        return mid;
      } else if (midValue < target) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return -1;
  }
};