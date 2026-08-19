class Solution {
public:
    void solve(int k,int n,vector<int>&curr,vector<vector<int>>&ans,int num){
        if(n==0 && curr.size()==k){
            ans.push_back(curr);
            return;
        }
        if(k<curr.size() || n<0 || num>=10 ) return ;
        curr.push_back(num);
        solve(k,n-num,curr,ans,num+1);
        curr.pop_back();
        solve(k,n,curr,ans,num+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>curr;
        solve(k,n,curr,ans,1);
        return ans;
    }
};