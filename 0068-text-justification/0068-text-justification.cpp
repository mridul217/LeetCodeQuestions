class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector <string> result;
        int n = words.size();
        int i=0;
        while(i<n){
            int letterCount =words[i].size();
            int j = i+1;
            int space = 0;

            while(j<n && words[j].size() + 1 + space + letterCount <= maxWidth){
                letterCount += words[j].size();
                space +=1;
                j++;
            }

            int leftSpace = maxWidth - letterCount;
            int required = space == 0 ? 0 : leftSpace/ space;
            int extra = space == 0 ? 0 : leftSpace % space;

            // last line
            if(j == n){
                required = 1;
                extra = 0;
            }

            string line;
            for(int k=i; k<j; k++){
                line +=words[k];

                if(k == j-1) continue;
                for (int a=1;a<=required;a++){
                    line += " ";
                }
                if(extra > 0){
                    line += " ";
                    extra--;
                }
            }
            while(line.size() < maxWidth){
                line += " ";
            }
            result.push_back(line);
            i=j;
        }
        return result;
    }
};