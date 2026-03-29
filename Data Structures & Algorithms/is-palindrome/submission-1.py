class Solution:
    def isPalindrome(self, s: str) -> bool:
        # 1. clean-up string: remove anything besides letters or numbers
        result = ""
        s = s.lower()
        for c in s:
            if ('a' <= c <= 'z') or ('0' <= c <= '9'):
                result += c

        # 2. reverse string, compare if reverse = original
        reversed_str = result[::-1]
        if result == reversed_str:
            return True
        return False
        