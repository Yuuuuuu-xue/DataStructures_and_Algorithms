from typing import List

class Solution:
    def maximumBeauty(self, items: List[List[int]], queries: List[int]) -> List[int]:
        items.sort()
        queries_with_i = [(q, i) for i, q in enumerate(queries)]
        queries_with_i.sort()

        item_i = 0
        prev_beauty = 0

        for query, query_i in queries_with_i:
            while item_i < len(items) and items[item_i][0] <= query:
                prev_beauty = max(prev_beauty, items[item_i][1])
                item_i += 1

            queries[query_i] = prev_beauty
        
        return queries
