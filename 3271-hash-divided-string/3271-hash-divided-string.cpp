class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.length();
        string res="";
        int hashChar=0;
        for(int i=0;i<n;i++){
            if((i+1)%k==0){
                hashChar+=s[i]-'a';
                hashChar=hashChar%26;
                res.push_back(hashChar+'a');
                hashChar=0;
            }
            else{
                hashChar+=s[i]-'a';
            }
        }
        return res;
    }
};