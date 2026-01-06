class Solution {
    int[] dp=new int[101];
    public int solve(int n,int i,int[] nums){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int take=nums[i]+solve(n,i+2,nums);
        int skip=solve(n,i+1,nums);
        return dp[i]=Math.max(take,skip);
    }
    public int rob(int[] nums) {
        int n=nums.length;
        for(int i=0;i<101;i++){
            dp[i]=-1;
        }
        return solve(n,0,nums);
    }
}