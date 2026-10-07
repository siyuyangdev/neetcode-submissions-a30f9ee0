class Solution:
    def climbStairs(self, n: int) -> int:
        # // 1 recursive solution: O(2^n) times
        # if n in (0, 1, 2):
        #     return n
        # else:
        #     return self.climbStairs(n - 1) + self.climbStairs(n - 2)
        if n <= 2:
            return n
        steps = []
        steps.append(0)
        steps.append(1)
        steps.append(2)
        for i in range(3, n + 1):
            steps.append(steps[i - 1] + steps[i - 2])
        return steps[n]