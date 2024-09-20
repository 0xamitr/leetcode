class Solution {
public:
    int reverse(int x) {
        int s = 0;
        while(x){
            if(s>INT_MAX/10 || s<INT_MIN/10) return 0;
            s = (s*10)+(x%10);
            x = x/10;
        }
        return s;
    }
};
