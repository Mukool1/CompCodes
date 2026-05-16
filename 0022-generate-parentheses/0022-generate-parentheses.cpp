class Solution {
public:

    void generate(int o,int c,string s,int n,vector<string>&res){
        if(o==c &&o+c==n*2){
            res.push_back(s);
            return;
        }
        if(o<n){
            generate(o+1,c,s+"(",n,res);
        }
        if(c<o){
            generate(o,c+1,s+")",n,res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        generate(0,0,"",n,res);
        return res;
    }
};