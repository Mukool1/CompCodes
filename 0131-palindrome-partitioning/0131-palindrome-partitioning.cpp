class Solution {
public:
    bool isPal(string s){
        int j=s.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                j--;
            }
        }
        return true;
    }
    void getPart(string s,vector<string>&partitions,vector<vector<string>>&ans){
        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(isPal(part)){
                partitions.push_back(part);
                getPart(s.substr(i+1),partitions,ans);
                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string>partitions;vector<vector<string>>ans;
        getPart(s,partitions,ans);
        return ans;
    }
};