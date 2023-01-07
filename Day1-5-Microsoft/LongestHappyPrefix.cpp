// LeetCode- 1392. Longest Happy Prefix

class Solution {
public:
    string longestPrefix(string s) {
        int num=s.size();
        vector<int> ind(num,0);
        string sol="";
        int i=0;
        int j=1;
        while(j<num){
            if(s[i]==s[j]){
                ind[j]=i+1;
                i++;
                j++;
            }
            else if(i){
                i=ind[i-1];
            }
            else{
                j++;
            }
        }
        sol=s.substr(0,i);
        return sol;
    }
};
