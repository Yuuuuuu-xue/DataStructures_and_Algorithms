from collections import deque


def is_bilateral(vertices, edges) -> bool:
    """
    Given a list of vertices and edges (representing in adjacent list), return 
    True iff the corresponding graph is a bilateral graph.
    """
    visited = {}
    color = True
    # Since the graph might not be connected
    for vertex in vertices:
        if vertex not in visited:
            # Define a new vertex and apply BFS
            queue = deque([vertex])
            visited[vertex] = color
            while queue:
                color = not color
                curr = queue.popleft()
                for neighbour in edges[curr]:
                    # If we haven't seen this vertex before
                    if neighbour not in visited:
                        visited[neighbour] = color
                        queue.append(neighbour)
                    # We have seen this vertex before, then we need to check if they belong to 
                    # the same group of not
                    else:
                        # Same group and a connected edge, thus not bilateral
                        if visited[neighbour] == visited[curr]:
                            return False
    return True
                    

if __name__ == '__main__':
    test_valid_bilateral_v = [0, 1, 2, 3, 4]
    test_valid_bilateral_e = {
        0: [3],
        1: [3, 4],
        2: [],
        3: [0, 1],
        4: [1]
    }
    expected = True
    print(expected == is_bilateral(test_valid_bilateral_v, test_valid_bilateral_e))

    test_invalid_bilateral_v = [0, 1, 2, 3, 4]
    test_invalid_bilateral_e = {
        0: [3, 2],
        1: [3, 4],
        2: [0],
        3: [0, 1],
        4: [1]
    }
    expected = False
    print(expected == is_bilateral(test_invalid_bilateral_v, test_invalid_bilateral_e))
