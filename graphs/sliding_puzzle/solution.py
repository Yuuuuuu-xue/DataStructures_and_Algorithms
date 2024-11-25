from typing import List

class Solution:
    def slidingPuzzle(self, board: List[List[int]]) -> int:
        seen = set()

        q = []
        s = ''
        for row in board:
            s += ''.join(map(str, row))
            
        q.append((s, s.find('0')))
        seen.add(s)

        steps = 0
        m = {
            0: (1, 3),
            1: (0, 2, 4),
            2: (1, 5),
            3: (0, 4),
            4: (1, 3, 5),
            5: (2, 4)
        }

        while q:
            next_q = []

            for puzzle, i in q:
                if puzzle == '123450':
                    return steps

                for d in m[i]:
                    x = i + d
                    if x >= 0 and x < 6:
                        # Swap x and i
                        new_puzzle = list(puzzle)
                        new_puzzle[x], new_puzzle[i] = new_puzzle[i], new_puzzle[x]
                        new_puzzle = ''.join(new_puzzle)
                        if new_puzzle not in seen:
                            seen.add(new_puzzle)
                            next_q.append((new_puzzle, x))
            steps += 1
            q = next_q

        return -1
