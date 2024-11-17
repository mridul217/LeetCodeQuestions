class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        result = 0
        sum_s = sum(ord(char) for char in s)
        sum_t = sum(ord(char) for char in t)

        return chr(sum_t - sum_s)