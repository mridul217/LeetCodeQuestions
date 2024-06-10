class Solution {
public:
    // int max(int a,int b){
    //     if(a>b)
    //         return a;
    //     else
    //         return b;
    // }
    
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> res(n,1);
        int count =0;
        for (int i=1; i<n; i++){
            if (ratings[i-1] < ratings[i]){
                res[i] = res[i-1]+1;
            }
        }
        for (int i=n-2; i>=0; i--){
            if (ratings[i] > ratings[i+1]){
                res[i] = std::max(res[i], res[i + 1] + 1);
            }
        }
        for (int i=0; i<res.size();i++)
            count = count + res[i];
        return count;
    }
};