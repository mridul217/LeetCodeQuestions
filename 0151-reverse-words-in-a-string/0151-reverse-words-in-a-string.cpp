class Solution {
public:
    string reverseWords(string s) {
        string word;
        vector<string> words;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && !word.empty()) {
                words.push_back(word);
                word.clear();
            } else if (s[i] != ' ') {
                word += s[i];
            }
        }

        if (!word.empty()) {
            words.push_back(word);
        }

        std::string reversedSentence;
        for (int i = words.size() - 1; i >= 0; i--) {
            reversedSentence += words[i];
            if (i > 0) {
                reversedSentence += ' ';
            }
        }

        return reversedSentence;
    }
};