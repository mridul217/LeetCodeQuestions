class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totaldiff=0, n=gas.size(), fuel=0, index=0;
        for (int i=0; i<n; i++){
            int diff = gas[i] - cost[i];// 5-4=1
            totaldiff += diff;//1
            fuel += diff;//1 incase -2
            if(fuel < 0){
                index=i+1;
                fuel=0;
            }
        }
        return (totaldiff < 0) ? -1: index;
    }
};