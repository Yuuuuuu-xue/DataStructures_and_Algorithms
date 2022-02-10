from typing import List, Tuple


# Assume that processes run to completion when they are first scheduled
def first_come_first_served(data: List[Tuple[str, int, int]]) -> None:
    # First of all, sort the data by their arrival time
    sorted_data = sorted(data, key=lambda x: x[1])

    curr_w, curr_f, total_w = 0, 0, 0
    for thread_name, arrival, service in sorted_data:
        curr_w = max(0, curr_f - arrival)
        curr_f += service
        total_w += curr_w
        print(f'Thread ${thread_name} starts at {curr_f - service} and finish at ${curr_f}.')

    print(f'Total run time: ${curr_f}')
    print(f'Total wait time: ${total_w}')
    print(f'Average wait time: ${total_w / len(sorted_data)}')
    print(f'Average time to complete: ${(curr_f + total_w) / len(sorted_data)}')


if __name__ == '__main__':
    first_come_first_served([
        ('A', 0, 3),
        ('B', 2, 6),
        ('C', 4, 4),
        ('D', 6, 5),
        ('E', 8, 2)
    ])
    # Expect:
    # Total running time: 20
    # Total wait time: 23
    # Average wait time: 4.6
    # Average time to complete: 8.6

