class Solution {
    bool check(string s,string p){
        vector<int>check(26,0);
        vector<int>check_from(26,0);
        for(char c:p)check[c-'a']=1;
        for(char c:s)check_from[c-'a']=1;
        for(int i=0;i<check.size();i++){
            if(check[i]<=check_from[i])continue;
            else return false;
        }
        return true;
    }
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(string s:words){
            if(check(allowed,s))count++;
        }
        return count;
    }
};