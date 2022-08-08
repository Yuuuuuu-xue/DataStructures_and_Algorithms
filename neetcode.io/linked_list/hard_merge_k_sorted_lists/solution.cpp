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

class Compare {
public:
  bool operator()(ListNode* a, ListNode* b) {
    return a->val >= b->val;
  }
};

class Solution {
public:
  ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode *, vector<ListNode *>, Compare> pq;
    for (ListNode *curr : lists) {
      if (curr != nullptr) pq.push(curr);
    }

    // Build the target linked list
    ListNode *dummy = new ListNode();
    ListNode *curr = dummy;
    while(!pq.empty()) {
      curr->next = pq.top();
      pq.pop();
      curr = curr->next;
      if (curr->next != nullptr) pq.push(curr->next);
    }

    return dummy->next;
  }
};