from typing import List


def max_heapify(i, curr_size, heap) -> None:
    """
    Perform a max heapify (also known as bubble down) from the node i
    to all its children to maintain the max heap property. Modify the the heap.
    """
    left = 2 * i # left child 
    right = 2 * i + 1 # right child

    # if left child is still within current heap and the value is still less than the parent
    if left <= curr_size and heap[left] > heap[i]:
        largest = left
    else:
        largest = i
    # go to right if right has even smaller value
    if right <= curr_size and heap[right] > heap[largest]:
        largest = right
    # we need to continue min heapify
    if largest != i:
        # swap the two nodes
        heap[i], heap[largest] = heap[largest], heap[i]
        max_heapify(largest, curr_size, heap)


def build_heap(nums: List[int]) -> List[int]:
    curr_size = len(nums)
    heap = [0] + nums
    for i in range(len(heap) - 1, 0, -1):
        max_heapify(i, curr_size, heap)
    return heap


if __name__ == '__main__':
    test_list = [2, 7, 26, 25, 19, 17, 1, 90, 3, 36]
    print(build_heap(test_list) == [0, 90, 36, 26, 25, 19, 17, 1, 7, 3, 2])
