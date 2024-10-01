class CustomStack:

    def __init__(self, maxSize: int):
        self.n = maxSize
        self.stack = []
        self.inc_stack = []

    def push(self, x: int) -> None:
        if len(self.stack) < self.n:
            self.stack.append(x)
            self.inc_stack.append(0)

    def pop(self) -> int:
        if not self.stack:
            return -1
        if len(self.inc_stack) > 1:
            # Since top item will be poped
            self.inc_stack[-2] += self.inc_stack[-1]
        return self.stack.pop() + self.inc_stack.pop()

    def increment(self, k: int, val: int) -> None:
        if not self.inc_stack:
            return
        self.inc_stack[min(k, len(self.inc_stack)) - 1] += val

# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)