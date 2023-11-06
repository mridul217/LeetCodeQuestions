class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words = s.split()  # Split the input string into words, removing extra spaces.

        reversed_words = words[::-1]  # Reverse the list of words.

        result = " ".join(reversed_words)  # Join the reversed words with a single space.

        return result
