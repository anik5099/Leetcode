class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'I'){
                if(s[i+1] == 'X' and i+1 < s.length()){
                    ans += 9;
                    i++;
                }
                else if(s[i+1] == 'V' and i+1 < s.length()){
                    ans += 4;
                    i++;
                }
                else{
                    ans += 1;
                }
            }
            
            else if(s[i] == 'X'){
                if(s[i+1] == 'L' and i+1 < s.length()){
                    ans += 40;
                    i++;
                }
                else if(s[i+1] == 'C' and i+1 < s.length()){
                    ans += 90;
                    i++;
                }
                else{
                    ans += 10;
                }
            }
            
            else if(s[i] == 'C'){
                if(s[i+1] == 'D' and i+1 < s.length()){
                    ans += 400;
                    i++;
                }
                else if(s[i+1] == 'M' and i+1 < s.length()){
                    ans += 900;
                    i++;
                }
                else{
                    ans += 100;
                }
            }
            else if(s[i] == 'V'){
                ans += 5;
            }
            else if(s[i] == 'L'){
                ans += 50;
            }
            else if(s[i] == 'D'){
                ans += 500;
            }
            else{
                ans += 1000;
            }
        }
        
        return ans;
    }
};