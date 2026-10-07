class Solution:
    def climbStairs(self, n: int) -> int:
        # // 1 recursive solution: O(2^n) times
        # if n in (0, 1, 2):
        #     return n
        # else:
        #     return self.climbStairs(n - 1) + self.climbStairs(n - 2)
        if n <= 2:
            return n
        steps = [0] * (n + 1)
        steps[0] = 0
        steps[1] = 1
        steps[2] = 2
        for i in range(3, n + 1):
            steps[i] = steps[i - 1] + steps[i - 2]
        return steps[n]
