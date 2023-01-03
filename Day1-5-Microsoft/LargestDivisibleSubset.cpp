// LeetCode- 368. Largest Divisible Subset


class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> dp(n,1);
        int mx=1;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[i]%nums[j]==0){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
            mx=max(mx,dp[i]);
        }
        vector<int> ans(mx);
        int prev=0;
        for(int i=n-1;i>=0;i--){
            if(dp[i]==mx && prev%nums[i]==0){
                ans[mx-1]=nums[i];
                prev=nums[i];
                mx--;
            }
        }
        return ans;
    }
};
