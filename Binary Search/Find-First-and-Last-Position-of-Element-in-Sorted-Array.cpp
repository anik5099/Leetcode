class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        bool contains = binary_search(nums.begin(), nums.end(), target);
        if(contains == false){
            vector<int> ans;
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }

        auto lo = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        auto hi = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        hi = hi - 1;

        vector<int> ans;
        ans.push_back(lo);
        ans.push_back(hi);
        return ans;
    }
};