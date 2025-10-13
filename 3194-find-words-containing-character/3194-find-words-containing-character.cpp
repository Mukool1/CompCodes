class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int> isThere;
        for(int i=0;i<n;i++){
            string tempr=words[i];
            for(int j=0;j<tempr.size();j++){
                if(tempr.at(j)==x){
                    isThere.push_back(i);
                    break;
                }
            }
        }
        return isThere;
    }
};