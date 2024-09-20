#include <math.h>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x == 0){
            return true;
        }
        int k = trunc(log10(x)) + 1;
        int s = pow(10,k-1);
        int l = 1;
        for(int p = 0; p < k/2; p++){
            if((x/l)%10 != (x/s)%10){
                return false;
            }
            l *= 10;
            s /= 10;
        }
        return true;
    }
};
