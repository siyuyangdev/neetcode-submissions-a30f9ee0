class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # check same string length
        if len(s) != len(t):
            return False

        # if length are same, check if sorted str are the same
        if sorted(s) == sorted(t):
            return True
        return False


        