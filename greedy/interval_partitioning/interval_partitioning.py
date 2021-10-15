from typing import *
import heapq


def interval_partitioning(requests: List[Tuple[int, int]]) -> Tuple[int, map]:
    sorted_requests = sorted(requests, key=lambda request: request[0])
    # Priority queue implemented by min heap, we will store (finish_time, resource_i)
    pq = []
    # Number of resources needed
    num_resources = 0
    # Schedule
    schedule = {}
    for start_time, end_time in sorted_requests:
        # None if we have empty priority queue
        resource = heapq.heappop(pq) if pq else None

        # if request is compatible with this resource, so we check if finish time <= current start time
        if resource is not None and resource[0] <= start_time:
            # schedule the request on this resource
            schedule[resource[1]].append((start_time, end_time))
            # update the value back to the priority queue
            heapq.heappush(pq, (end_time, resource[1]))
        else:
            # we need to push back the resource if we are not using it
            if resource is not None:
                heapq.heappush(pq, resource)
            # allocate a new resource
            num_resources += 1
            schedule[num_resources] = [(start_time, end_time)]
            heapq.heappush(pq, (end_time, num_resources))
    return num_resources, schedule


if __name__ == '__main__':
    test_requests = [
        (0, 1),
        (0, 3),
        (0, 1),
        (2, 3),
        (2, 5),
        (4, 7),
        (4, 7),
        (6, 9),
        (8, 9),
        (8, 9)
    ]
    expected = (
        3,
        {
            1: [(0, 1), (2, 3), (4, 7), (8, 9)],
            2: [(0, 3), (4, 7), (8, 9)],
            3: [(0, 1), (2, 5), (6, 9)]
        }
    )
    print(expected == interval_partitioning(test_requests))
