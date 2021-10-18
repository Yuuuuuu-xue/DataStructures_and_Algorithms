class BITree:
    def __init__(self, n):
        self.n = n
        # Since index 1 based
        self.sumArray = [0] * (n + 1)

    def update(self, i, value) -> None:
        # Since index 1 based, so we need to increment it by 1
        i += 1
        while i <= self.n:
            self.sumArray[i] += value
            i += i & (-i)

    def getSum(self, i) -> int:
        output = 0
        i += 1
        while i > 0:
            output += self.sumArray[i]
            i -= i & (-i)
        return output


if __name__ == '__main__':
    test_BIT = BITree(5)
    print(0 == test_BIT.getSum(4))
    test_BIT.update(0, 5)
    test_BIT.update(3, 10)
    test_BIT.update(4, 11)
    print(26 == test_BIT.getSum(4))
    print(15 == test_BIT.getSum(3))
    print(5 == test_BIT.getSum(2))
    print(5 == test_BIT.getSum(0))


