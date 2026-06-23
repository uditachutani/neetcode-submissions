class Solution {
public:
    int solve(int ind,vector<int>&dp,vector<int>&cost){
        if(ind==0)return 0;
        if(ind==1)return 0;

        if(dp[ind]!=-1)return dp[ind];

        int oneStep=solve(ind-1,dp,cost)+cost[ind-1];
        int twoStep=solve(ind-2,dp,cost)+cost[ind-2];

        return dp[ind]=min(oneStep,twoStep);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return solve(n,dp,cost);
    }
};
