class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        int l, r;
        
        if (n < 3) return {};

        set<vector<int>> uniqueTriplets;
        sort(nums.begin(), nums.end());
        for (int k =0; k<n-2; k++){
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            l=k+1;
            r=n-1;
            while(l<r){
                int sum = nums[k]+nums[l]+nums[r];
                if(sum == 0){
                    uniqueTriplets.insert({nums[k], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;

                }
                else if (sum < 0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        vector<vector<int>> answer(uniqueTriplets.begin(), uniqueTriplets.end());
        return answer;
    }
};