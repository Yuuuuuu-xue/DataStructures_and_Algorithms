def quick_sort(sub_arr): 
    # Base case, no need to partition
    if len(sub_arr) < 2:
        return sub_arr[:]
    else: 
        # Choose the first element to be the pivot
        pivot = sub_arr[0]
        smaller, bigger = partition(sub_arr[1:], pivot)
        
        smaller = quick_sort(smaller)
        bigger = quick_sort(bigger)
        
        return smaller + [pivot] + bigger


def partition(arr, pivot):
    smaller = []
    bigger = []
    for item in arr:
        if item <= pivot:
            smaller.append(item)
        else:
            bigger.append(item)
    return smaller, bigger


if __name__ == '__main__':
    test_list = [3, -1, 2, 3, 0, 5, 1]
    print(sorted(test_list) == quick_sort(test_list))
