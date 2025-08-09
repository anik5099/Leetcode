class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 100000;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            int l = i+1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                int diff_sum = abs(target - sum);
                int diff_ans = abs(target - ans);
                // cout << nums[i] << ' ' << nums[l] << ' ' << nums[r] << ' ' << diff_sum << ' ' << diff_ans << '\n';
                if(diff_sum < diff_ans){
                    ans = sum;
                    // l++;
                }
                
                if(sum < target){
                    l++;
                }
                else if(sum > target){
                    r--;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};