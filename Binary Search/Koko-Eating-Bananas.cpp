class Solution {
public:
    long long all(vector<int> &piles, int k){
        long long req = 0;
        for(int i=0; i<piles.size(); i++){
            long long x = (piles[i]+k-1) / k;
            req += x;
        }

        return req;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long lo = 1;
        long long hi = *max_element(piles.begin(), piles.end());
        long long ans = hi;
        while(lo <= hi){
            long long mid = lo + (hi - lo) / 2;
            if(all(piles, mid) <= h){
                ans = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }

        return (int)ans;    
    }
};