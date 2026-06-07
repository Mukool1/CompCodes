class Solution {
public:
    string truncateSentence(string s, int k) {
        string res="";
        for(int i=0;i<s.size();i++){
            
            if(s[i]==' '){
                k--;
                if(k==0)break;
            }
            res.push_back(s[i]);
        }
        return res;
    }
};