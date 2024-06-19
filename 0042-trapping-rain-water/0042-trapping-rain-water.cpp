class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left = height;
        vector<int> right = height;
        int answer = 0;

        for (int i = 1; i < n; i++){
            if(left[i-1]>height[i]){
                left[i] = left[i-1];
            }
            else{
                left[i] = height[i];
            }
        }

        for (int i =n-2; i>=0;i--){
            if(right[i+1]>height[i]){
                right[i] = right[i+1];
            }
            else{
                right[i] = height[i];
            }
        }

        for (int i=0; i< n; i++){
            answer += min(left[i], right[i])-height[i];
        }
        return answer;
    }
};