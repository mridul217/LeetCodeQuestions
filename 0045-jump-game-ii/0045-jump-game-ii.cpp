class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
    if (n <= 1)
        return 0;
    int jumps = 0;
    int maxReach = 0;
    int currentMax = 0;
    for (int i = 0; i < n - 1; ++i) {
        currentMax = max(currentMax, i + nums[i]);

        if (i == maxReach) {
            maxReach = currentMax;
            jumps++;
        }
    }

    return jumps;


    }
};