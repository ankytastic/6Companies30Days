// LeetCode 172. Factorial Trailing Zeroes

class Solution {
public:
    int trailingZeroes(int n) {
        int cou=0;
        for(;n>0;){
            n/=5;
            cou+=n;
        }
        return cou;
    }
};
