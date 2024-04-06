class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        n = len(board)
        m = len(board[0])
        word_len = len(word)
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

        def dfs(i, j, curr_level) -> bool:
            if curr_level >= word_len:
                return True
            if i < 0 or i >= n or j < 0 or j >= m or board[i][j] == '#' or board[i][j] != word[curr_level]:
                return False
            
            c = board[i][j]
            # Mark curr cell as visited cell
            board[i][j] = '#'

            for dir in directions:
                if dfs(dir[0] + i, dir[1] + j, curr_level + 1):
                    return True
            
            # Backtrack
            board[i][j] = c

        for i in range(n):
            for j in range(m):
                if board[i][j] == word[0] and dfs(i, j, 0):
                    return True

        return False
