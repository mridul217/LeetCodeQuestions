class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        for (int n : nums){
            if (cnt<2 || n!=nums[cnt-2]){
                nums[cnt++]=n;
            }
        }
        return cnt;
    }
};