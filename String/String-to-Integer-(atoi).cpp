class Solution {
public:
    int myAtoi(string s) {
        long number = 0LL;
        int i = 0;
        // ignoring whitespaces
        while(i < s.length() and s[i] == ' '){
            i++;
        }
        
        // checking for negative value
        bool neg = false;
        if(s[i] == '-'){
            neg = true;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }
        
        // ignoring leading 0s
        while(i < s.length() and s[i] == '0'){
            i++;
        }
        
        bool negated = false;
        // calculating the number
        
        while(i < s.length() and (s[i]>='0' and s[i]<='9')){
            
            // cout << s[i] << ' ';
            if(negated){
                number = number * 10LL - (s[i] - '0');
            }
            else{
                number = number * 10LL + (s[i]-'0');
            }
            // cout << number << ' ';
            if(neg and !negated){
                number = -1LL * number;
                negated = true;
            }
            // cout << number << endl;
            if(number > INT_MAX){
                number = INT_MAX;
                break;
            }
            else if(number < INT_MIN){
                number = INT_MIN;
                break;
            }
            
            i++;
        }
        
        
        
        
        // else if(number < INT_MIN){
        //     number = INT_MIN;
        // }
        
        return int(number);
    }
};