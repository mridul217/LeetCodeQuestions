class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # for char in s:
        #     if char in t:
        #         pass
        #     else:
        #         return False
        # return True
        return sorted(s) == sorted(t)