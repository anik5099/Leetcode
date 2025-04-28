class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = (int)nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                return true;
            }

            while(left < mid and nums[left] == nums[mid]){
                left++;
            }

            if(nums[left] <= nums[mid]){
                if(nums[left] <= target and target <= nums[mid]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }

            else{
                if(nums[mid] < target and target <= nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }

        return false;
    }
};