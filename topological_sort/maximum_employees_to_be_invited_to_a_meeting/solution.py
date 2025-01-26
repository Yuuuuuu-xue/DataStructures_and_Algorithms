from typing import List

class Solution:
    def maximumInvitations(self, favorite: List[int]) -> int:
        n = len(favorite)

        in_degree = [0 for _ in range(n)]

        for person in favorite:
            in_degree[person] += 1
        
        q = []
        visited = set()
        for i in range(n):
            if in_degree[i] == 0:
                # Leaf node
                q.append(i)
                visited.add(i)

        max_path_length = [0 for _ in range(n)]

        # Use topological sort to find out maximum path to a given node
        # All nodes in visited are not in cycle
        while q:
            next_q = []

            for person in q:
                favorite_person = favorite[person]
                max_path_length[favorite_person] = max(max_path_length[favorite_person], 1 + max_path_length[person])
                in_degree[favorite_person] -= 1

                if favorite_person not in visited and in_degree[favorite_person] == 0:
                    next_q.append(favorite_person)
                    visited.add(favorite_person)

            q = next_q
        
        max_cycle = 0
        o = 0
        
        # Loop over the nodes to find out length of a cycle
        for i in range(n):
            if i in visited:
                # Node in topoglocial sort is not in a cycle
                continue
                
            cycle_len = 0
            curr = i

            while curr not in visited:
                visited.add(curr)
                curr = favorite[curr]
                cycle_len += 1
            
            if cycle_len == 2:
                # X -> ... -> A <-> B <- ... <- Y
                # Since we can put more people (other chain) to the table
                o += 2 + max_path_length[i] + max_path_length[favorite[i]]
            else:
                # A -> B, B -> C, C -> A, cannot add more people
                max_cycle = max(max_cycle, cycle_len)
        
        return max(o, max_cycle)


