#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  bool isPalindrome(ListNode* head) {
    // Find the length
    int s = 0;
    ListNode* curr = head;
    while (curr != NULL) {
      s ++;
      curr = curr->next;
    }

    if (s < 2) return true;

    // Reverse the first half of the linked list
    curr = head;
    ListNode *firstHead = nullptr;
    for (int i = 0; i < s / 2; i++) {
      ListNode* temp = curr->next;
      curr->next = firstHead;
      firstHead = curr;
      curr = temp;    
    }

    // if odd length, then move curr to the next pointer
    if (s % 2 != 0) curr = curr->next;

    // Now curr is the head of the second half of the linedlist, we traverse both list at the same time and vertify
    for (int i = 0; i < s / 2; i++) {
      if (firstHead->val != curr->val) return false;
      firstHead = firstHead->next;
      curr = curr->next;
    }

    return true;
  }
};