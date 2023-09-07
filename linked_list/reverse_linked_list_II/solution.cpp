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
  ListNode* reverse(ListNode *head) {
    ListNode *reverseHead = nullptr;
    ListNode *curr = head;
    while (curr) {
      ListNode *next = curr->next;
      curr->next = reverseHead;
      reverseHead = curr;
      curr = next;
    }
    return reverseHead;
  }

  ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (left == right) {
      return head;
    }

    ListNode *dummy = new ListNode(0, head);
    int i = 1;
    
    ListNode *curr = dummy;
    while (curr->next && i < left) {
      i ++;
      curr = curr->next;
    }
    ListNode *prevLeft = curr;

    while (curr->next && i < right) {
      i ++;
      curr = curr->next;
    }
    ListNode *prevRight = curr;


    ListNode *nextRight = prevRight->next->next;
    prevRight->next->next = nullptr;
    ListNode *leftHead = prevLeft->next;
    prevLeft->next = nullptr;

    ListNode *reverseHead = reverse(leftHead);
    prevLeft->next = reverseHead;
    leftHead->next = nextRight;
    return dummy->next;
  }
};