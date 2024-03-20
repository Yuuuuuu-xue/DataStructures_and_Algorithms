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
  ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode *curr = list1;
    ListNode *start = nullptr;
    ListNode *end = nullptr;

    int i = 0;
    while (i < a - 1) {
      curr = curr->next;
      i++;
    }
    start = curr;

    while (i <= b) {
      curr = curr->next;
      i++;
    }
    end = curr;

    start->next = list2;

    // Move to the end of list2
    ListNode *list2Curr = list2;
    while (list2Curr != nullptr && list2Curr->next != nullptr) {
      list2Curr = list2Curr->next;
    }
    list2Curr->next = end;

    return list1;

  }
};