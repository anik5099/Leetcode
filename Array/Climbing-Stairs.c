int dp[50];
int fnc(int n){
    if(n <= 2){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = fnc(n-1) + fnc(n-2);
}
int climbStairs(int n) {
    memset(dp, -1, sizeof dp);
    return fnc(n);
}