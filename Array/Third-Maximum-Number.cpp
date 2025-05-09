class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_map<int, bool> mp;
        sort(nums.begin(), nums.end(), greater());
        int cnt = 3;
        int ans = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(mp.count(nums[i])){
                continue;
            }
            else{
                cnt--;
                mp[nums[i]] = true;
            }

            if(cnt == 0){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};