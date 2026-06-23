class Solution {
public:
    int solve(int ind,vector<int>&dp,vector<int>&nums){
        if(ind<0)return 0;
        if(ind==0)return nums[ind];
        if(dp[ind]!=-1)return dp[ind];

        int pick=solve(ind-2,dp,nums)+nums[ind];
        int notPick=solve(ind-1,dp,nums);

        return dp[ind]=max(pick,notPick);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(n-1,dp,nums);
    }
};
