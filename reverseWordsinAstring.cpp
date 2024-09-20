class Solution {
public:
    string reverseWords(string s) {
        string buffer = "";
        string ans = "";
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == ' '){
                if(!buffer.size())
                    continue;
                if(ans.size())
                    ans += ' ';
                for(int j = buffer.size()-1; j >= 0; j--){
                    ans += buffer[j];
                }
                buffer = "";
            }
            else{
                buffer += s[i];
            }
        }
        if(buffer.size() && ans.size())
            ans += ' ';
        for(int j = buffer.size()-1; j >= 0; j--){
            ans += buffer[j];
        }
        return ans;
    }
};