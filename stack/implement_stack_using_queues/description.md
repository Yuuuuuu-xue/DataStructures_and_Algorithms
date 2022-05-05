## Stack
Click [here](../notes.md) to go back to the notes page.

## Description
Implement a lst-in-first-out (LIFO) stack using only two queuees. The implemented stack should support all the functions of normal stack (```push```, ```top```, ```pop```, ```empty```). Implement the ```MyStack``` class:
- ```void push(int x)``` pushes element x to the top of the stack
- ```int pop()``` removes the element on the top of the stack and returns it
- ```int top()``` returns the element on the top of the stack.
- ```boolean empty()``` returns ```true``` if the stack is empty, ```false``` otherwise.

## Key Idea
We will use a currQueue to solve this problem. When we push an item to the stack, we push it to the queue. When we want to push an item to the stack, we just push an item the currQueue. The last element in the queue will be our top element of the stack. When we want to get or pop the top element of the stack, we can keep pop the item from currQueue and push to another queue until the last element which will be our top element of the stack.

But this solution requires additional space for an extra linkedlist for both ```pop()``` and ```top()``` functions. Alternative way to do so is use an variable currSize to keep track of the current queue size. When we want to find the top element of the stack, we can remove the top element of the queue and push it to the queue again for currSize - 1 times. Then the next item poped out will be our last item in the queue and top item in the stack.

## Solution
- [Java Solution](implement_stack_using_queues.java)