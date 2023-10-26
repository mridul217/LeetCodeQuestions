class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> unique;
        for(int num : nums){
            unique.insert(num);
        }
        nums.clear();
        for(int ele : unique){
            nums.push_back(ele);
        }
        return nums.size();
    }
};