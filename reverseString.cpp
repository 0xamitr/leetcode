class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp;
        int size = s.size();
        for(int i = 0; i < size/2; i++){
            temp = s[i];
            s[i] = s[size - i - 1];
            s[size - i - 1] = temp;
        }
    }
};