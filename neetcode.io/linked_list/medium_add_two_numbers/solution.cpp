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
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* curr1 = l1;
    ListNode* curr2 = l2;
    ListNode* dummy = new ListNode();
    ListNode* curr = dummy;
    bool accumulate = false;
    while(curr1 != nullptr && curr2 != nullptr) {
      int currSum = curr1->val + curr2->val + accumulate;
      if (currSum >= 10) {
        currSum -= 10;
        accumulate = true;
      } else {
        accumulate = false;
      }
      curr->next = new ListNode(currSum);
      curr = curr->next;
      curr1 = curr1->next;
      curr2 = curr2->next;
    }
    // Now curr1 or curr2 can be at most 1 non-empty
    while (curr1 != nullptr) {
      int currSum = curr1->val + accumulate;
      if (currSum >= 10) {
        currSum -= 10;
        accumulate = true;
      } else {
        accumulate = false;
      }
      curr->next = new ListNode(currSum);
      curr = curr->next;
      curr1 = curr1->next;
    }
    while (curr2 != nullptr) {
      int currSum = curr2->val + accumulate;
      if (currSum >= 10) {
        currSum -= 10;
        accumulate = true;
      } else {
        accumulate = false;
      }
      curr->next = new ListNode(currSum);
      curr = curr->next;
      curr2 = curr2->next;
    }
    // We may still have accumulate = true, thus a leading 1
    if (accumulate) {
      curr->next = new ListNode(accumulate);
    }
    return dummy->next;
  }
};