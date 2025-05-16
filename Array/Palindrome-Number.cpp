class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        long long rev = 0;
        long long temp = x;
        while(x){
            rev = rev*10LL + x%10;
            x = x / 10;
        }

        return (rev == temp);
    }
};