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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *fast = head;
    for (int i = 0; i < n; i++) {
      fast = fast->next;
    }
    // Remove head
    if (fast == NULL) return head->next;
    ListNode *slow = head;
    while (fast->next != NULL) {
      fast = fast->next;
      slow = slow->next;
    }
    if (slow->next == fast) {
      // Remove tail
      slow->next = NULL;
    } else {
      slow->next = slow->next->next;
    }
    return head;
  }
};