class Solution {
public:
    void generate(int n,int open,int close,string curr,vector<string>&ans){
        if(open>n || close>n)return;
        if(open==close && open+close ==2*n){
            ans.push_back(curr);
            return;
        }
        if(open>close){
            generate(n,open,close+1,curr+")",ans);
        }
        if(open<n){
            generate(n,open+1,close,curr+"(",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string curr="";
        generate(n,0,0,curr,ans);
        return ans;
    }
};