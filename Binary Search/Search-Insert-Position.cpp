class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0;
        int hi = (int)nums.size() - 1;
        int ans = 0;
        bool found = false;
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(nums[mid] == target){
                found = true;
            }

            if(nums[mid] <= target){
                ans = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        if(found){
            return ans;
        }
        else{
            if(target < nums[ans]){
                return ans;
            }
            else return ans+1;
        }
    }
};