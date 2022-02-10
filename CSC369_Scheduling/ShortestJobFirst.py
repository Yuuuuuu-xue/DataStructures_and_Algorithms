from typing import List, Tuple
import heapq


def shortest_job_first(data: List[Tuple[str, int, int]]):
    # Sort the data according to their start time
    sorted_data = sorted(data, key=lambda x: x[1])

    pq = []
    # curr_w, curr_f, total_w
    d = [0, 0, 0]

    def finish_thread(tn, a, s):
        d[0] = max(0, d[1] - a)
        d[1] += s
        d[2] += d[0]
        print(f'Thread ${tn} starts at {d[1] - s} and finish at {d[1]}.')
    i = 0
    while i < len(sorted_data):
        while i < len(sorted_data) and sorted_data[i][1] < d[1]:
            heapq.heappush(pq, (sorted_data[i][2], sorted_data[i][0], sorted_data[i][1]))
            i += 1
        if len(pq) == 0:
            finish_thread(sorted_data[i][0], sorted_data[i][1], sorted_data[i][2])
            i += 1
        else:
            while pq:
                p = heapq.heappop(pq)
                finish_thread(p[1], p[2], p[0])

    print(f'Total run time: ${d[1]}')
    print(f'Total wait time: ${d[2]}')
    print(f'Average wait time: ${d[2] / len(sorted_data)}')
    print(f'Average time to complete: ${(d[1] + d[2]) / len(sorted_data)}')


if __name__ == '__main__':
    shortest_job_first([
        ('A', 0, 3),
        ('B', 2, 6),
        ('C', 4, 4),
        ('D', 6, 5),
        ('E', 8, 2)
    ])
    # Expected:
    # Total run time: 20
    # Total wait time: 18
    # Average wait time: 3.6
    # Average turnaround time: 7.6
