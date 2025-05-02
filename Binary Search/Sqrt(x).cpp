class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        int ans = hi;

        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(1LL* mid * mid <= 1LL * x){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }

        return ans;
    }
};