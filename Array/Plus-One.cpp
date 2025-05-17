class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 0;
        bool ok = true;
        for(int i=digits.size()-1; i>=0; i--){
            if(ok){
                int x = digits[i] + 1;
                ans.push_back(x%10);
                carry = x / 10;
                ok = false;
            }
            else{
                int x = digits[i] + carry;
                ans.push_back(x%10);
                carry = x / 10;
            }
        }

        if(carry > 0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};