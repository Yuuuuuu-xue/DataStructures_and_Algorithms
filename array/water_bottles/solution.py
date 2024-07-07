class Solution:
    def solve(self, numWaterBottles: int, numEmptyBottles: int, numExchange: int):
        self.num_water += numWaterBottles
        empty_bottles = numEmptyBottles + numWaterBottles
        if empty_bottles // numExchange > 0: 
            self.solve(empty_bottles // numExchange, empty_bottles % numExchange, numExchange)


    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        self.num_water = 0
        self.solve(numBottles, 0, numExchange)
        return self.num_water
