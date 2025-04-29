class Solution {
public:
    long long check(vector<int>&nums, int k){
        long long sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += (nums[i] + k - 1) / k;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long lo = 1;
        long long hi = *max_element(nums.begin(), nums.end());
        long long ans = hi;
        while(lo <= hi){
            long long mid = lo + (hi - lo)/2;
            if(check(nums, mid) <= threshold){
                ans = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }

        return (int)ans;
    }
};