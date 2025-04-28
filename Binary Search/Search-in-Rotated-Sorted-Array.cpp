class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = (int)nums.size()-1;

        int ans = -1;
        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                ans = mid;
                break; 
            }

            // left partition
            else if(nums[left] <= nums[mid]){
                if(nums[left] <= target and target < nums[mid]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }

            // right partition
            else{
                if(nums[mid] < target and target <= nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }

        return ans;
    }
};