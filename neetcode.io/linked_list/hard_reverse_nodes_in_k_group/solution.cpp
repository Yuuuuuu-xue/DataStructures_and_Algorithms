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
  ListNode* reverseKGroup(ListNode* head, int k) {
    int len = 0;
    ListNode* curr = head;
    while (curr != nullptr) {
      len += 1;
      curr = curr->next;
    }

    // Connect this linked list with a dummy head, then we can simply return dummy->next to get the reversed linked list
    ListNode *dummy = new ListNode();
    dummy->next = head;
    ListNode *currHead = dummy;
    for (int i = 0; i < len / k; i++) {
      // Reverse the subgroup starting at curr of length k
      ListNode *reverseHead = currHead->next;
      ListNode *reverseTail = currHead->next;

      ListNode *reverseCurr = reverseHead->next;
      // cout << reverseHead->val << " " << reverseCurr->val << "\n";
      // A -> B -> C -> D should change to C -> B -> A -> D for k = 3
      for (int i = 0; i < k - 1; i++) {
        // reverseHead = A, reverseCurr = B, temp = C
        ListNode *temp = reverseCurr->next;
        // B -> A, and C -> B
        reverseCurr->next = reverseHead;
        // reverseHead = B, reversedHead = C
        reverseHead = reverseCurr;
        // reverseCurr = C, reverseCurr = D
        reverseCurr = temp;
      }
      // cout << reverseHead ->val << " " << reverseCurr->val << "\n";
      // dummy -> A -> B -> C -> D, then reverseHead is C and reverseTail is A, thus dummy -> C -> B -> A -> D
      currHead->next = reverseHead;
      reverseTail->next = reverseCurr;
      currHead = reverseTail;
    }
    return dummy->next;
  }
};