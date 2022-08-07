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
  void reorderList(ListNode* head) {
    int len = 0;
    stack<ListNode*> s;
    ListNode *curr = head;
    while (curr != NULL) {
      s.push(curr);
      len ++;
      curr = curr->next;
    }

    // Modify the list
    curr = head;
    ListNode *next = NULL;
    for (int i = 0; i < len / 2; i++) {
      next = curr->next;
      curr->next = s.top();
      s.pop();
      curr->next->next = next;
      curr = next;
    }

    if (len % 2 == 0) {
      curr->next = NULL;
    } else if (next != NULL) {
      curr->next = next;
      next->next = NULL;
    }
  }
};