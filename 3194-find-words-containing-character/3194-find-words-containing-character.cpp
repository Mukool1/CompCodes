class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int> isThere;
        for(int i=0;i<=n-1;i++){
            string temp=words[i];
            for(int j=0;j<temp.size();j++){
                if(temp.at(j)==x){
                    isThere.push_back(i);
                    break;
                }
            }
        }
        return isThere;
    }
};