def schedule_intervals(requests) -> list:
    """
    Return the maximum size of a set of requests such that all the requests are mutually compatible.
    Assume requests is a list of request, each request r_i is a tuple of (s_i, t_i) where s_i is the start
    time and t_i is the end time.
    """
    # Sort by requests finish time in descending order so we can pop it in constant time
    sorted_requests = sorted(requests, key=lambda request: request[1], reverse=True)
    output = []
    while sorted_requests:
        r = sorted_requests.pop()
        output.append(r)
        while sorted_requests:
            next_r = sorted_requests.pop()
            # Since sorted by their end time, if compatible time, then next request start time >= curr request end time
            if next_r[0] >= r[1]:
                # Then append back and exit this loop
                sorted_requests.append(next_r)
                break
    return output


if __name__ == '__main__':
    test_requests = [
        (0, 2),
        (2, 4),
        (4, 6),
        (6, 8),
        (0, 1),
        (1, 10),
        (1, 3),
        (3, 4),
        (6, 7),
        (7, 9)
    ]
    print({(0, 1), (1, 3), (3, 4), (6, 7), (4, 6), (7, 9)} == set(schedule_intervals(test_requests)))

