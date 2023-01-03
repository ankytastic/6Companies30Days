// LeetCode- 2344. Minimum Deletions to Make Array Divisible

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
            sort(nums.begin(),nums.end());
            sort(numsDivide.begin(),numsDivide.end());
            int cnt=0;
            int cmn=numsDivide[0];
            for(int i=0;i<numsDivide.size();i++){
                cmn=__gcd(cmn,numsDivide[i]);
            }
            if(cmn<nums[0]) 
                return -1;
            for(int i=0;i<nums.size();i++){
                if(cmn%nums[i]==0){
                    return cnt;
                }
                cnt++;
            }
            return -1;
    }
};
