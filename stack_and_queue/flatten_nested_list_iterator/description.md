## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Problem
You are given a nested list of integers ```nestedList```. Each element is either an integer or a list whose elements may also be integers or other lists. Implement an iterator to flatten it.

Implement the ```NestedIterator``` class
- ```NestedIterator(List<NestedInteger> nestedList)``` initializes the iterator with the nested list ```nestedList```.
- ```int next()``` returns the next integer in the nested list.
- ```boolean hashNext()``` returns ```true``` if there are still some integers in the nested list and ```false``` otherwise.

Your code will be tested with the following pseudocode:
```
initialize iterator with nestedList
res = []
while iterator.hasNext()
  append iterator.next() to the end of res
return res
```

## Example
```
Input: nestedList = [[1, 1], 2, [1, 1]]
Output: [1, 1, 2, 1, 1]

Input: nestedList = [1, [4, [6]]]
Output: [1, 4, 6]
```

## Key Idea
There are basically two ways to solve this problem. First way is to flatten the list at the initializer step. Then the next() and hasNext() will take O(1). But initialier will take much longer. The second way is simply store the nestedList and traverse the list inside next() and hasNext(). This way, the solution will be more efficient (comparing the two initializer steps). To implement the second approach, we will use a stack to solve this problem. The element inside the stack will be a pair of <NestedList, Integer> where the second elements represents the current index of the NestedList. To get the next element, we first pop a NestedList from the stack with its current index i, if NestedList[i].getInteger() is not null, then we found an integer and we can return it or True, update the index i, if i < length, we push it back to the stack. If we found NestedList[i].getInteger() returns null, then we update i and push the NestedList[i] back to the stack (if i < length) and we push <NestedList[i], 0> back into the stack and recursively call the function again.

## Solution
- [Java Solution](flatten_nested_list_iterator.java)