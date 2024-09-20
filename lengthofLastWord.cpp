class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        bool ok = false;
        int sol = 0;
        for(int i = size-1; i >= 0; i--){
            if(s[i] != ' '){
                ok = true;
                sol++;
            }
            else
                if(ok)
                    return sol;
        }
        return sol;
    }

};