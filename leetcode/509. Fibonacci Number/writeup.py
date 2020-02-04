class Solution:
    def fib(self, N: int) -> int:
        if N <= 1:
            return N
        total = self.fib(N - 1) + self.fib(N - 2)
        return total