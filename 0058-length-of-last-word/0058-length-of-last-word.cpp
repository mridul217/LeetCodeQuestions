class Solution {
public:
    int lengthOfLastWord(string s) {
        int wlen=0;
        int i = s.length() - 1; // Start from the end of the string

        // Skip any trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            wlen++;
            i--;
        }
    return wlen;
    }
};