// LeetCode- 396 - Rotate Function
//You are given an integer array nums of length n. Return maximum length of Rotation Function.



class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int l=nums.size();
        vector<int> num;
        int sum=0;
        int nsum=0;
        for(int i=0;i<l;i++){
            sum+=nums.at(i);
            nsum+=i*nums.at(i);
        }
        num.push_back(nsum);
        int k=nsum;
        for(int i=1;i<l;i++){
            k=k+sum-l*(nums.at(l-i));
            num.push_back(k);
        }
        sort(num.begin(),num.end());
        return num.at(l-1);
    }
};
