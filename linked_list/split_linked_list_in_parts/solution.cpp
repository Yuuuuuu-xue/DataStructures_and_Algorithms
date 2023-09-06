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
  vector<ListNode*> splitListToParts(ListNode* head, int k) {
    int n = 0;
    ListNode *curr = head;
    while (curr) {
      n ++;
      curr = curr->next;
    }

    int d = n / k;
    int m = n % k;

    vector<ListNode *> o;
    curr = head;
    for (int i = 0; i < k; i++) {
      if (d == 0 && m == 0) {
        o.push_back(nullptr);
        continue;
      }

      ListNode *splitCurr = curr;
      ListNode *prevNode = nullptr;
      for (int j = 0; j < d; j++) {
        prevNode = splitCurr;
        splitCurr = splitCurr->next;
      }
      if (m > 0) {
        prevNode = splitCurr;
        splitCurr = splitCurr->next;
        m --;
      }

      prevNode->next = nullptr;
      o.push_back(curr);
      curr = splitCurr;
    }

    return o;
  }
};