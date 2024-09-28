from typing import Optional

class DoubleLinkedList:
    def __init__(self, val: int):
        self.val = val
        self.prev = None
        self.next = None


class MyCircularDeque:

    def __init__(self, k: int):
        self.front = None
        self.last = None
        self.k = k
        self.n = 0
        

    def insertFront(self, value: int) -> bool:
        if self.n == self.k:
            return False
        new_front = DoubleLinkedList(value)
        
        # Update the linked list
        if self.front is not None:
            new_front.next = self.front
            self.front.prev = new_front
            self.front = new_front
        else:
            # Only one node
            self.front = new_front
            self.last = new_front
        
        self.n += 1
        return True

    def insertLast(self, value: int) -> bool:
        if self.n == self.k:
            return False
        new_last = DoubleLinkedList(value)

        # Update the linked list
        if self.last is not None:
            new_last.prev = self.last
            self.last.next = new_last
            self.last = new_last
        else:
            self.front = new_last
            self.last = new_last
        
        self.n += 1
        return True
        

    def deleteFront(self) -> bool:
        if self.n == 0:
            return False
        elif self.n == 1:
            # One node
            self.front = None
            self.last = None
        else:
            # Remove the front
            self.front = self.front.next
            self.front.prev = None
        
        self.n -= 1
        return True
        

    def deleteLast(self) -> bool:
        if self.n == 0:
            return False
        elif self.n == 1:
            # One node
            self.front = None
            self.last = None
        else:
            # Remove the last
            self.last = self.last.prev
            self.last.next = None
        
        self.n -= 1
        return True
        
    def getFront(self) -> int:
        if self.n == 0:
            return -1
        return self.front.val
        
    def getRear(self) -> int:
        if self.n == 0:
            return -1
        return self.last.val
        
    def isEmpty(self) -> bool:
        return self.n == 0
        
    def isFull(self) -> bool:
        return self.n == self.k


# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()