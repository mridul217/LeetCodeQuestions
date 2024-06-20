class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";
        for (int i=0; i<s.size(); i++){
            if ( isalnum(s[i]))
                word += tolower(s[i]);
        }
        string reversed_word = word; // Create a copy of word to reverse
        reverse(reversed_word.begin(), reversed_word.end()); // Reverse the copy

        return word ==reversed_word;
    }
};