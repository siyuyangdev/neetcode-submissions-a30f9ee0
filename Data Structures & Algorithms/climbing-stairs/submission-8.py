class Solution:
    def climbStairs(self, n: int) -> int:
        # // Solution 1: recursion - O(2^n) times
        # if n in (0, 1, 2):
        #     return n
        # else:
        #     return self.climbStairs(n - 1) + self.climbStairs(n - 2)

        # // Solution 2: Array/List - O(n) times
        # if n <= 2:
        #     return n
        # steps = []
        # steps.append(0)
        # steps.append(1)
        # steps.append(2)
        # for i in range(3, n + 1):
        #     steps.append(steps[i - 1] + steps[i - 2])
        # return steps[n]

        # // Solution 3: store 2 varibles - Time O(n), Space O(1)
        if n <= 2:
            return n
        else:
            prev1 = 1
            prev2 = 2
            for i in range(3, n + 1):
                current = prev1 + prev2
                prev1 = prev2
                prev2 = current
            return current



