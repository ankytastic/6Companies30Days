// LeetCode - 216. Combination Sum III
/* Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order. */

class Solution {
public:
    void combination(int k,int num,vector<int> temp,vector<vector<int>> &ans,int s){
        if(num==0&&k==0){
            ans.push_back(temp);
            return;
        }
        if(num==0) return;
        if(k==0) return;
        for(int i=s;i<=9;i++){
            temp.push_back(i);
            combination(k-1,num-i,temp,ans,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        if(k>=n || n==1){
            return ans;
        }
        vector<int> temp;
        combination(k,n,temp,ans,1);
        return ans;
    }
};
