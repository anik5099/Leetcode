class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = (int)nums.size();
        int pre[sz];
        int post[sz];
        pre[0] = nums[0];
        post[sz-1] = nums[sz-1];

        for(int i=1; i<sz; i++){
            pre[i] = nums[i]*pre[i-1];
        }

        for(int i=sz-2; i>=0; i--){
            post[i] = nums[i]*post[i+1];
        }

        vector<int> ans;
        for(int i=0; i<sz; i++){
            int res = 1;
            if(i > 0){
                res = res * pre[i-1];
            }
            if(i < sz-1){
                res *= post[i+1];
            }
            ans.push_back(res);
        }

        return ans;
    }
};