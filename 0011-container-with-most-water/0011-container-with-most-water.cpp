class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l =0;
        int r = n-1;
        int res=0;
        while ( l < r ){
            int area = (r-l) * min(height[l], height[r]);
            res = max(res, area);
            if (height[l] < height[r])
                l++;
            else if (height[l] > height[r])
                r--;
            else 
            r--;
        }
        return res;
    }
};