class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.length();
        for(int i=len-1; i>=0; i--){
            int x = num[i] - '0';
            if(x%2){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};