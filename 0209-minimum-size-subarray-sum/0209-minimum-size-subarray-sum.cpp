class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int total = 0;
        int res = INT_MAX;
        for (int r=0; r< n;r++){
            total = total + nums[r];
            while (total >= target){
                res = min((r-l+1), res);
                total = total - nums[l];
                l++;
            }
        }
        return res==INT_MAX? 0 : res;
    }
};