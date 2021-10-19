from typing import *
from collections import defaultdict


def minJumps(jumps: List[int]) -> int:
    m = defaultdict(list)

    # Construct the graph
    for i, item in enumerate(jumps):
        m[item].append(i)

    n = len(jumps)
    output = 0
    visited = {0}
    queue = [0]
    while queue:
        next_q = []
        for i in queue:
            if i + 1 == n:
                # Then we at the final index, thus return the number of steps we take
                return output
            # Since we can also have those two moves
            travel = [i - 1, i + 1]
            if jumps[i] in m:
                # Since we can also move to other items that has the same value
                travel += m[jumps[i]]
                # It is not necessary to recheck this later on
                m.pop(jumps[i])

            # Search on unvisited item
            for item in travel:
                if 0 <= item < n and item not in visited:
                    next_q.append(item)
                    visited.add(item)

        # After we have examined queue, we have the next level, so
        queue = next_q
        # Increase one step of move
        output += 1

    # By assumption, if we guarantee to have a solution, then we won't reach here
    return output


if __name__ == '__main__':
    test_list = [100, -23, -23, 404, 100, 23, 23, 23, 3, 404]
    print(3 == minJumps(test_list))






