class Solution {
public:
    int fnc(vector<int>&nums, int goal){
        int left = 0, count = 0, res = 0;
        int right = 0;
        while(right < nums.size()){
            if(nums[right] == 1){
                count++;
            }
            while(count > goal and left <= right){
                if(nums[left] == 1){
                    count--;
                }
                left++;
            }
            res += right - left + 1;
            right++;
        }
        return res;
    }
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return fnc(nums, goal) - fnc(nums, goal-1);
    }
};