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
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy = ListNode();
    ListNode* currSortedHead = &dummy;
    cout << currSortedHead->val << "\n";
    ListNode* currSorted = currSortedHead;
    ListNode* curr1 = list1;
    ListNode* curr2 = list2;
    while (curr1 != NULL && curr2 != NULL) {
      if (curr1->val <= curr2->val) {
        currSorted->next = curr1;
        curr1 = curr1->next;
      } else {
        currSorted->next = curr2;
        curr2 = curr2->next;
      }
      currSorted = currSorted->next;
    }
    if (curr1 == NULL) {
      currSorted->next = curr2;
    } else {
      currSorted->next = curr1;
    }
    return currSortedHead->next;
  }
};