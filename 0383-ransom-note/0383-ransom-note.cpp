class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i=0;
        for(int j=0;j<magazine.size();j++){
            if(magazine[j]==ransomNote[i]){
                i++;
            }
            if(i==ransomNote.size()){
                return true;
            }
        }
        return false;
    }
};