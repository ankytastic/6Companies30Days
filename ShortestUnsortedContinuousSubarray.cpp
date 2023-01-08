// LeetCode - 581. Shortest Unsorted Continuous Subarray


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int> num;
        for(int x:nums)
            num.push_back(x);
        int ind1=-1,ind2=-1;
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
            if(num[i]!=nums[i]){
                ind1=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(num[j]!=nums[j]){
                ind2=j;
                break;
            }
        }
        if(ind2-ind1>0)
            return (ind2-ind1+1);
        return 0;
    }
};
