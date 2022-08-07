#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  int findKthSmallestElement(vector<int> nums1, int left1, int right1, vector<int> nums2, int left2, int right2, int k, int curr) {
    // nums1 is empty
    if (left1 > right1) {
      // cout << left2 << " " << k << " " << curr << "\n";
      return nums2[left2 + k - curr];     
    }
    // nums2 is empty
    if (left2 > right2) {
      return nums1[left1 + k - curr];
    }
    // Both not empty
    int mid1 = (left1 + right1) / 2;
    int mid2 = (left2 + right2) / 2;
    if (mid1 + mid2 < k) {
      if (nums1[mid1] <= nums2[mid2]) {
        return findKthSmallestElement(nums1, mid1 + 1, right1, nums2, left2, right2, k, curr + mid1 - left1 + 1);
      } else {
        return findKthSmallestElement(nums1, left1, right1, nums2, mid2 + 1, right2, k, curr + mid2 - left2 + 1);
      }
    } else {
      if (nums1[mid1] >= nums2[mid2]) {
        return findKthSmallestElement(nums1, left1, mid1 - 1, nums2, left2, right2, k, curr);
      } else {
        return findKthSmallestElement(nums1, left1, right1, nums2, left2, mid2 - 1, k, curr);
      }
    }
  }

public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    // Odd
    if ((m + n) % 2 != 0) {
      return findKthSmallestElement(nums1, 0, m - 1, nums2, 0, n - 1, (m + n) / 2, 0);
    } else {
      // cout << findKthSmallestElement(nums1, 0, m - 1, nums2, 0, n - 1, (m + n) / 2, 0) << "\n";
      // cout << findKthSmallestElement(nums1, 0, m - 1, nums2, 0, n - 1, (m + n) / 2 - 1, 0) << "\n";
      return (double)(findKthSmallestElement(nums1, 0, m - 1, nums2, 0, n - 1, (m + n) / 2, 0) + findKthSmallestElement(nums1, 0, m - 1, nums2, 0, n - 1, (m + n) / 2 - 1, 0)) / 2;
    }
  }
};