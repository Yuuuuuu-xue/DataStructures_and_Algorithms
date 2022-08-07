#include <bits/stdc++.h>

using namespace std;

/*
Definition for a Node.
*/
class Node {
public:
  int val;
  Node* next;
  Node* random;
  
  Node(int _val) {
    val = _val;
    next = NULL;
    random = NULL;
  }
};

class Solution {
public:
  Node* copyRandomList(Node* head) {
    if (head == NULL) return NULL;
    
    Node* curr = head;
    while (curr != NULL) {
      Node *next = curr->next;
      // Construct a copied node
      Node* newCurr = new Node(curr->val);
      newCurr->next = next;
      newCurr->random = curr->random;
      curr->next = newCurr;
      curr = newCurr->next;
    }

    curr = head;
    while (curr != NULL) {
      // New node
      curr = curr->next;
      // Update the random pointer
      if (curr->random != NULL) curr->random = curr->random->next;
      // Original node
      curr = curr->next;
    }

    // Get back the original linedlist and construct new Head
    Node *newHead = head->next;
    curr = head;
    Node *newCurr = newHead;

    curr = head;
    while (newCurr->next != NULL) {
      // A -> 'A' -> B -> 'B' -> null
      // A -> B -> null and 'A' -> 'B' -> null
      curr->next = curr->next->next;
      newCurr->next = newCurr->next->next;
      curr = curr->next;
      newCurr = newCurr->next;
    }
    curr->next = NULL;
    return newHead;
  }
};