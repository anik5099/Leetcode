class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mp;
        bool ok = false;
        mp[nums[0]] = 1;
        for(int i=1; i<nums.size(); i++){
            if(mp[nums[i]]){
                if(abs(i + 1 - mp[nums[i]]) <= k){
                    ok = true;
                    break;
                }
            }
            mp[nums[i]] = i + 1;
        }

        return ok;
    }
};