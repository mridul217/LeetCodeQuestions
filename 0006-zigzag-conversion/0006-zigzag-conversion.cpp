class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows,"");
        int i=0;
        while(i< s.length()){
            for ( int index=0; index < numRows && i<s.length(); index++){
                ans[index] =ans[index] + s[i++];
            }
            for ( int index=numRows-2; index>0 && i<s.length(); index--){
                ans[index] = ans[index] + s[i++];
            }
        }
        string res="";
        for (string str : ans){
            res = res + str;
        }
    return res;
    }
};