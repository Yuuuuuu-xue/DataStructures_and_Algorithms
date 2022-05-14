## Shortest Weight Path
Click [here](../notes.md) to go back to the notes page.

## Problem
You are given a network of ```n``` nodes, labeled from ```1``` to ```n```. You are also given ```times```, a list of travel times as directed edges ```times[i] = (u_i, v_i, w_i)```, where ```u_i``` is the source node, ```v_i``` is the target node, and ```w_i``` is the time it takes for a signal to travel from source to target.

We will send a signal from a given node ```k```. Return the time it takes for all ```n``` nodes to receive the signal. If it is impossibnle for all the ```n``` nodes to receive the signal, return ```-1```.

## Example
```
Input: times = [[2, 1, 1], [2, 3, 1], [3, 4, 1]], n = 4, k = 2
Output: 2

Input: times =[[1, 2, 1]], n = 2, k = 1
Output: 1

Inpuit: times = [[1, 2, 1]], n = 2, k = 2
Output: -1
```

## Key Idea
For this question, we will find the shortest time takes from the node k to every other nodes. Then the maximum value will be the time it takes for all the ```n``` nodes to receive the signal.

## Complexity Analysis
- **Time complexity**: 
  - if $Q$ is implemented via a **binary heap**, then the time complexity is $\Theta(m \lg n)$
  - if $Q$ is implemented via a **Fibonacci heap**, then the time complexity is $\Theta(m + n \lg n)$
- **Space complexity**: $\Theta(n)$

## Solution
- [Java Solution](./network_delay_time.java)