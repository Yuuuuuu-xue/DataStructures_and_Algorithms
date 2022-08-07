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
  ListNode* reverseList(ListNode* head) {
    ListNode *reverseHead = NULL;
    ListNode *curr = head;
    while (curr != NULL) {
      ListNode *next = curr->next;
      curr->next = reverseHead;
      reverseHead = curr;
      curr = next;
    }
    return reverseHead;
  }
};