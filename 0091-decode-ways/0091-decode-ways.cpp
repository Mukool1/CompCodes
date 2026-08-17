class Solution {
public:
//recursion
    int rec(string s,int indx){
        if(indx==s.size())return 1;
        if (s[indx] == '0') return 0;
        int path1 = 0;
        int path2 = 0;

        path1=rec(s,indx+1);

        if(indx+1<s.size()){
            if(s[indx]=='1' || (s[indx]=='2'&&s[indx+1]<='6')){
                path2=rec(s,indx+2);
            }
        }
        return path1+path2;
    }
    int solveMemo(string s,int indx,vector<int>&dp){
        if(indx==s.size())return 1;
        if (s[indx] == '0') return 0;
        if(dp[indx]!=-1)return dp[indx];
        int path1 = 0;
        int path2 = 0;

        path1=solveMemo(s,indx+1,dp);

        if(indx+1<s.size()){
            if(s[indx]=='1' || (s[indx]=='2'&&s[indx+1]<='6')){
                path2=solveMemo(s,indx+2,dp);
            }
        }
        return dp[indx]=path1+path2;
    }
    int numDecodings(string s) {
        if(s[0]=='0')return 0;
        // return rec(s,0);
        vector<int>dp(s.size()+1,-1);
        return solveMemo(s,0,dp);
    }
};