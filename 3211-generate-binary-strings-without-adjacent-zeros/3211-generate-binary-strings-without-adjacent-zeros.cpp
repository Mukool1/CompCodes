class Solution {
public:

    void generate(vector<string>&res,string &s,int n,int last){
        if(s.length()==n){
            res.push_back(s);
            return ;
        }
        s.push_back('1');
        generate(res,s,n,1);
        s.pop_back();

        if(last!=0){
            s.push_back('0');
            generate(res,s,n,0);
            s.pop_back();
        }
    } 

    vector<string> validStrings(int n) {
        vector<string>res;
        string s;
        generate(res,s,n,1);
        return res;
    }
};