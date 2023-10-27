class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanNumerals;
        romanNumerals['I'] = 1;
        romanNumerals['V'] = 5;
        romanNumerals['X'] = 10;
        romanNumerals['L'] = 50;
        romanNumerals['C'] = 100;
        romanNumerals['D'] = 500;
        romanNumerals['M'] = 1000;

        int result = 0;

        for (int i=0;i<s.length();i++){
        if (i < s.length() - 1 && romanNumerals[s[i]] < romanNumerals[s[i + 1]]) {
            result -= romanNumerals[s[i]];
        }
        else{
            result += romanNumerals[s[i]];
        }
        }
        return result;

    }
};