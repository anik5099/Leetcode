class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector< vector<int> > ans;
        for(int i=0; i<nums.size(); i++){
            if(i > 0 and nums[i] == nums[i-1]){
                continue;
            }
            for(int j=i+1; j<nums.size(); j++){
                if(j > i+1 and nums[j] == nums[j-1]){
                    continue;
                }
                int l = j+1;
                int r = nums.size() - 1;
                while(l < r){
                    long long sum = 1LL * nums[l] + 1LL * nums[r];
                    long long total_sum = sum + 1LL * nums[i] + 1LL * nums[j];
                    if(total_sum == 1LL * target){
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while(l < r and nums[l] == nums[l+1]){
                            l++;
                        }
                        while(l < r and nums[r] == nums[r-1]){
                            r--;
                        }
                        l++;
                        r--;
                    }
                    else if(total_sum < target){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};