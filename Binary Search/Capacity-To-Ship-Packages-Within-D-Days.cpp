class Solution {
public:
    int check(vector<int>&weights, int k, int days){
        int d = 0;
        int current_weight = 0;
        int sz = (int)weights.size();
        // bool taken[sz];
        vector<bool> taken(sz, false);
        for(int i=0; i<weights.size(); i++){
            if(weights[i]+current_weight <= k){
                current_weight += weights[i];
                taken[i] = true;
            }
            else{
                d++;
                current_weight = 0;
                if(weights[i] <= k){
                    current_weight += weights[i];
                    taken[i] = true;
                }
            }
        }

        if(current_weight && current_weight <= k){
            d++;
        }

        bool all = true;
        for(int i=0; i<sz; i++){
            all &= taken[i];
        }

        if(all && d <= days){
            return true;
        }

        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sz = (int)weights.size();
        
        int lo = 1;
        int hi = accumulate(weights.begin(), weights.end(), 0);
        int ans = hi;

        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(check(weights, mid, days)){
                ans = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        return ans;
    }
};