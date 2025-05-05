class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg, pos;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<=0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

        vector<int> ans;
        int i = 0, j = 0;
        while(i < pos.size() && j < neg.size()){
            ans.push_back(pos[i]);
            ans.push_back(neg[j]);
            i++;
            j++;
        }
        while(i < pos.size()){
            ans.push_back(pos[i++]);
        }

        while(j < neg.size()){
            ans.push_back(neg[j++]);
        }

        return ans;
    }
};