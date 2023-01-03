// LeetCode - 299. Bulls and Cows
//You are playing the Bulls and Cows game with your friend.


class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        string s;
        int bull=0;
        int c=0;
        vector<int>a(10,0);
        vector<int>b(10,0);
        for(int i=0;i<n;i++)
        {
            if(secret[i]==guess[i]){
                bull++;
            }
            else{
                a[guess[i]-'0']++;
                b[secret[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            if((a[i]!=0)&&(b[i]!=0))
                c+=min(a[i],b[i]);
        }
        string m=to_string(bull); 
        string o=to_string(c);
        s+=m;
        s+='A';
        s+=o;
        s+='B';
        return s;
    }
};
