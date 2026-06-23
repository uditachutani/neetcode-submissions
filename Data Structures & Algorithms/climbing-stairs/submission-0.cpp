class Solution {
public:
    int solve(int ind,vector<int>&dp){
        if(ind==0)return 1;
        if(ind==1)return 1;
        if(dp[ind]!=-1)return dp[ind];

        int oneStep=solve(ind-1,dp);
        int twoStep=solve(ind-2,dp);

        return dp[ind]=oneStep+twoStep;
    }

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};
