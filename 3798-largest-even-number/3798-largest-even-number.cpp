class Solution {
public:
    string largestEven(string s) {
        if(s[s.size()-1]=='2')return s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                s.erase(i,1);
            }
            if(s[i]=='2')return s;
        }
        return s;
    }
};