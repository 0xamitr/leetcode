class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int total = -10001;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum > total)
                total = sum;
            if(sum < 0)
                sum = 0;
        }
        return total;
    }
};