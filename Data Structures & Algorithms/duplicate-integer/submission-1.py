class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # sort the list: [1, 3, 2, 3] -> [1, 2, 3, 3]
        nums.sort()
        # start from 2nd element, compare current element with prvious element
        # if there is a match, return true, 
        # if there is no match after loop whole list, rerutrn false
        for i in range(1, len(nums)):
            if nums[i] == nums[i -1]:
                return True
        return False        
        