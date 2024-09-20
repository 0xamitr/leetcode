class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = prices[0];
        int n = prices.size();
        int k;
        for(int i = 1; i < n; i++){
            k = prices[i];
            if(k - min > max)
                max = k - min;
            else if(k < min)
                min = k;
        }
        return max;
    }
};