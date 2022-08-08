#include <bits/stdc++.h>

using namespace std;

struct Node {
  int val;
  int key;
  Node *prev;
  Node *next;
  Node() : val(0), key(0), prev(nullptr), next(nullptr) {}
  Node(int key, int value) : key(key), val(value), prev(nullptr), next(nullptr) {}
};

class LRUCache {
public:
  int c;
  Node *front;
  Node *back;
  unordered_map<int, Node*>m;

  LRUCache(int capacity) {
    c = capacity;
    front = nullptr;
    back = nullptr;
    m.clear();
  }
  
  int get(int key) {
    // cout << "get: " << key << "\n";
    // Node *temp = front;
    // while (temp != nullptr) {
    //   cout << "(" << temp->key << ", " << temp->val << ") ";
    //   temp = temp->next;
    // }
    // cout << "\n";
    if (m.find(key) != m.end()) {
      Node *curr = m[key];
      // Update curr to the most recently used
      // If curr is the front, then nothing to do
      if (curr->prev != nullptr) {
        // If curr is the back of the linked list
        // curr -> null
        if (curr->next == nullptr) {
          curr->prev->next = curr->next;
          // We need to update back
          back = curr->prev;
        } else {
          // A <-> curr <-> B
          curr->prev->next = curr->next;
          curr->next->prev = curr->prev;
        }
        // In both case, move curr the front
        curr->next = front;
        front->prev = curr;
        curr->prev = nullptr;
        front = curr;
      }
      return curr->val;
    }
    return -1;
  }
  
  void put(int key, int value) {
    // Key exists, then just update it
    if (m.find(key) != m.end()) {
      // Set the new value
      m[key]->val = value;
      get(key);
      return;
    }
    // Construct a new node
    Node *newNode = new Node(key, value);
    // If capacity is not enough, remove the back
    if (c <= 0) {
      m.erase(back->key);
      // If remove a single node
      if (front == back) {
        front = nullptr;
        back = nullptr;
      } else {
        // front <-> ... B <-> Back
        back->prev->next = nullptr;
        back = back->prev;
      }
    } else {
      c --;
    }
    // Insert the node in the linkedlist as the front
    // If empty linkedlist
    if (front == nullptr) {
      front = newNode;
      back = newNode;
    } else {
      // newNode -> frontNode.
      newNode ->next = front; 
      front->prev = newNode;
      newNode->prev = nullptr;
      front = newNode;
    }
    m[key] = newNode;
  }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */