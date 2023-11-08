class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            int n = s.length();
    int maxLength = 0;
    unordered_map<char, int> charIndex;

    int left = 0;
    for (int right = 0; right < n; right++) {
        if (charIndex.find(s[right]) != charIndex.end()) {
            // If the character is already in the substring, update the left pointer.
            left = max(left, charIndex[s[right]] + 1);
        }
        charIndex[s[right]] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;

    }
};