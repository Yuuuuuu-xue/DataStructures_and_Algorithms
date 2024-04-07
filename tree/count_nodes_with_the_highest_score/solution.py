class Solution:
    def countHighestScoreNodes(self, parents: List[int]) -> int:
        n = len(parents)
        num_nodes = [1 for _ in range(n)]
        child = [[] for _ in range(n)]

        # Find out the child, skip the first node because root node is not a child node of any node
        for i in range(1, n):
            parent = parents[i]
            child[parent].append(i)
        
        # Compute the num_nodes
        def compute_num_nodes(i):
            for c in child[i]:
                # We can do this since each child can has only one parent
                # Thus compute_num_nodes will not be called twice for the same i
                num_nodes[i] += compute_num_nodes(c)
            return num_nodes[i]
        
        compute_num_nodes(0)

        # Find out the score
        max_score = 0
        num_highest_score_nodes = 0
        total_nodes = num_nodes[0]

        for i in range(n):
            score = 1
            for c in child[i]:
                score *= num_nodes[c]
            
            # If it has a parent
            if i != 0:
                score *= (total_nodes - num_nodes[i])

            if score > max_score:
                max_score = score
                num_highest_score_nodes = 1
            elif score == max_score:
                num_highest_score_nodes += 1
        
        return num_highest_score_nodes

