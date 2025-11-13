## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Problem
On a single-threaded CPU, we execute a program containing `n` functions. Each function has a unique ID between `0` and `n - 1`.

Function calls are stored in a call stack: when a function call starts, its ID is pushed onto the stack, and when a function call ends, its ID is popped off the stack. The function whose ID is at the top of the stack is the current function being executed. Each time a function starts or ends, we write a log with the ID, whether it started or ended, and the timestamp.

You are given a list `logs`, where `logs[i]` represents the `ith` log message formatted as a string `"{function_id}":{"start" | "end"}:{timestamp}"`. For example, `"0:start:3"` means a function call with function ID `0` started at the beginning of timestamp `3`, and `"1:end:2"` means a function call with function ID `1` ended at the end of timestamp `2`. Note that a function can be called multiple times, possibily recursively.

A function's exclusive time is the sum of execution times for all function calls in the program. For example, if a function is called twice, one call executing for `2` time units and another call executing for `1` time unit, the exclusive time is `2 + 1 = 3`.

Return the exclusive time of each function in an array, where the value at the `ith` index represents the exclusive time for the function with ID `i`.

## Example
```
Input: n = 1, logs = ["0:start:0", "0:start:2", "0:end:5", "0:start:6", "0:end:6", "0:end:7"]
Output: [8]
Explanation:
- Function 0 starts at the beginning of time 0, executes for 2 units of time, and recursively calls itself
- Function 0 (recursive call) starts at the beginning of time 2 and executes for 4 units of time
- Function 0 (initial call) resumes exeuction then immediately calls itself again
- Function 0 (2nd recursive call) starts at the beginning of time 6 and executes for 1 unit of times
- Function 0 (initial call) resumes execution at the beginning of time 7 and executes for 1 unit of time.
- Thus, function 0 spends 2 + 4 + 1 + 1 = 8 units of total time executing.
```

## Key Idea
We can simply use a stack to simulate this process.

For each start, we know there will be next log. Hence, we divide it into two cases:
1. Start and then start: it has been executed for some time until the next start, hence we have the duration and push it into the array
2. Start and then end: simple case, we just calculate the duration and push to the array.

For each end, we know the stack cannot be empty so we finish executing a function. We know the last time and current end time, we can calculate the duration by using the duration from stack + the diff between curr end time and time.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)