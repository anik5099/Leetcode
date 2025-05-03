class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0;
        for(int i=0; i<nums.size(); i++){
            sum1 += nums[i];
        }

        int sz = (int)nums.size();
        int sum2 = sz;
        sum2 *= (sz + 1);
        sum2 /= 2;
        return sum2 - sum1;
    }
};