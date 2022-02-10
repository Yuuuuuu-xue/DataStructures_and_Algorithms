from typing import List, Tuple
from collections import deque


def round_robin(data: List[Tuple[str, int, int]], quantum: int) -> None:
    sorted_data = sorted(data, key=lambda x: x[1])
    q = deque()
    i = 0
    curr_f = 0
    m = {}
    prev_pop = None
    while i < len(sorted_data) or q or prev_pop:
        if i < len(sorted_data) and ((q and curr_f >= sorted_data[i][1]) or (not q and prev_pop is None) or (
                not q and prev_pop is not None and curr_f >= sorted_data[i][1])):
            q.append(sorted_data[i])
            i += 1
        else:
            # So at same time with new process, we want to let new process go first
            if prev_pop is not None:
                q.append(prev_pop)
                prev_pop = None
            thread_name, arrival, service = q.popleft()
            service -= quantum
            if service > 0:
                curr_f += quantum
                print(f'Thread {thread_name} starts at {curr_f - quantum} and ends at {curr_f}, with remaining'
                      f' {service}.')
                # At the same time, we may have new process enter
                prev_pop = (thread_name, arrival, service)
            else:
                curr_f += service + quantum
                print(f'Thread {thread_name} starts at {curr_f - service - quantum} and ends at {curr_f}, finished.')
                m[thread_name] = (curr_f, arrival)
    print("================")
    for key in m:
        print(f'Turnaround time for thread {key}: {m[key][0] - m[key][1]}')


if __name__ == '__main__':
    round_robin([
        ('A', 0, 3),
        ('B', 2, 6),
        ('C', 4, 4),
        ('D', 6, 5),
        ('E', 8, 2)
    ], 2)
    # Expect
    # A starts at 0 and ends at 2 with remaining 1
    # B starts at 2 and ends at 4 with remaining 4
    # A starts at 4 and ends at 5, finished
    # C starts at 5 and ends at 7 with remaining 2
    # B starts at 7 and ends at 9 with remaining 2
    # D starts at 9 and ends at 11 with remaining 3
    # C starts at 11 and ends at 13, finished
    # E starts at 13 and ends at 15, finished
    # B starts at 15 and ends at 17, finished
    # D starts at 17 and ends at 19 with remaining 1
    # D starts at 19 and ends at 20, finished
    # ========
    # Turnaround for A: 5
    # Turnaround for B: 15
    # Turnaround for C: 9
    # Turnaround for D: 14
    # Turnaround for E: 7

