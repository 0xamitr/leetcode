class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> dpleft(size, 1);
        vector<int> dpright(size, 1);
        for(int i = 1; i < size; i++){
            dpleft[i] = nums[i-1]*dpleft[i-1];
        }
        for(int i = size-2; i >= 0; i--){
            dpright[i] = nums[i+1]*dpright[i+1];
        }
        for(int i = 0; i < size; i++){
            dpright[i] *= dpleft[i];
        }
        return dpright;
    }
};