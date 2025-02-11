class Solution:
    def stack_ends_with(self, stack, part):
        if len(stack) < len(part):
            return False
        for i in range(len(part)):
            if stack[-1 - i] != part[-1 - i]:
                return False
        return True

    def removeOccurrences(self, s: str, part: str) -> str:
        stack = []

        for c in s:
            stack.append(c)

            while self.stack_ends_with(stack, part):
                for i in range(len(part)):
                    stack.pop()

        return ''.join(stack)

