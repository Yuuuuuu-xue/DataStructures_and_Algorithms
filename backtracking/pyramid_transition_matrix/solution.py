from typing import List
from collections import defaultdict

class Solution:
    def build_rows(self, row, curr_row, i, new_rows):
        if i >= len(row) - 1:
            new_rows.append(curr_row[::])
            return
        
        for new_block in self.m[row[i] + row[i + 1]]:
            # print('new_block', i, new_block)
            curr_row.append(new_block)
            self.build_rows(row, curr_row, i + 1, new_rows)
            curr_row.pop()

    def solve(self, row: List[str]):
        # print(row)
        if len(row) == 1:
            return True
        
        new_rows = []
        self.build_rows(row, [], 0, new_rows)
        for new_row in new_rows:
            if self.solve(new_row):
                return True
        return False

    def pyramidTransition(self, bottom: str, allowed: List[str]) -> bool:
        self.m = defaultdict(list)

        for blocks in allowed:
            self.m[blocks[0] + blocks[1]].append(blocks[2])

        return self.solve(list(bottom))
