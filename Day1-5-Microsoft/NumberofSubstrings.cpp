// LeetCode- 1358. Number of Substrings Containing All Three Characters

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int indA=-1;
        int indB=-1;
        int indC=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                indA=i;
            }
            else if(s[i]=='b'){
                indB=i;
            }
            else if(s[i]=='c'){
                indC=i;
            }
            if(i>1){
                count+=min({indA,indB,indC})+1;
            }
        }
        return count;
    }
};
