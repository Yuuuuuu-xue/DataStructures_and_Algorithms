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
  ListNode* partition(ListNode* head, int x) {
    ListNode* smallHead = new ListNode();
    ListNode* largeHead = new ListNode();
    ListNode* smallEnd = smallHead;
    ListNode* largeEnd = largeHead;

    ListNode* curr = head;
    while (curr != nullptr) {
      if (curr->val < x) {
        smallEnd->next = curr;
        smallEnd = smallEnd->next;
      } else {
        largeEnd->next = curr;
        largeEnd= largeEnd->next;
      }
      curr = curr->next;
    }
    // Join two linkedlist together, note smallHead and largeHead both start with a dummy node
    largeEnd->next = nullptr;
    smallEnd->next = largeHead->next;
    return smallHead->next;
  }
};
