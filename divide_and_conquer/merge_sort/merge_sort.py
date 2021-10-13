def mergeSort(subList: list) -> list:
    if len(subList) == 1:
        return subList
    else:
        m = len(subList) // 2
        subListLeft = mergeSort(subList[0:m])
        subListRight = mergeSort(subList[m:len(subList)])
        return merge(subListLeft, subListRight)

def merge(lst1: list, lst2: list) -> list:
    i = 0
    j = 0
    outputList = []

    while i < len(lst1) and j < len(lst2):
        if lst1[i] < lst2[j]:
            outputList.append(lst1[i])
            i += 1
        else:
            outputList.append(lst2[j])
            j += 1
    
    return outputList + lst1[i:len(lst1)] + lst2[j:len(lst2)]


if __name__ == '__main__':
    test_list = [1, 6, 3, 4, 6, 9, -10, 2]
    sorted_list = mergeSort(test_list)
    target_list = [-10, 1, 2, 3, 4, 6, 6, 9]
    print(sorted_list == target_list)
