class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left = 0 # start pointer
        right = len(numbers) - 1 # end pointer
        # compare the sum of 2 pointers with target
        # equal: return
        # sum < target: left pointer move right
        # sum > target: right pointer move left
        while left < right:
            sum = numbers[left] + numbers[right]

            if sum == target:
                return [left + 1, right + 1]

            elif sum < target:
                left += 1
            else:
                right -= 1
        