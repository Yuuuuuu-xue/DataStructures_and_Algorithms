from typing import List
from collections import deque

class Solution:
    def countMentions(self, numberOfUsers: int, events: List[List[str]]) -> List[int]:
        mentions_count = [0 for _ in range(numberOfUsers)]
        all_count = 0

        pre_processed_events = []
        for type, timestamp, mentions in events:
            pre_processed_events.append([int(timestamp), 0 if type == 'OFFLINE' else 1, mentions])
        pre_processed_events.sort()

        active_users = set([i for i in range(numberOfUsers)])
        # (timestamp, id)
        inactive_users = deque()

        for timestamp, type, mentions in pre_processed_events:
            # We update inactive users first
            while inactive_users and inactive_users[0][0] <= timestamp:
                active_users.add(inactive_users[0][1])
                inactive_users.popleft()
            
            # Process
            if type == 1:
                # MESSAGE
                if mentions == 'ALL':
                    all_count += 1
                elif mentions == 'HERE':
                    for id in active_users:
                        mentions_count[id] += 1
                else:
                    # ids
                    id_list = mentions.split(' ')
                    for id_str in id_list:
                        id = int(id_str[2:])
                        mentions_count[id] += 1
            else:
                # OFFLINE
                id = int(mentions)
                active_users.remove(id)
                inactive_users.append((timestamp + 60, id))

        if all_count > 0:
            for i in range(numberOfUsers):
                mentions_count[i] += all_count
        return mentions_count