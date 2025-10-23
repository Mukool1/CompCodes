class Solution {
public:
    bool Pal(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int j=s.size()-1;
        int i=0;
        while(i<j){
            if(s[i]!=s[j]){
               return Pal(s,i+1,j) || Pal(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
    }
};