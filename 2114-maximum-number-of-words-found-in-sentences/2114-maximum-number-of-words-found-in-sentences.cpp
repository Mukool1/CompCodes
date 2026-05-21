class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        for(string s:sentences){
            int currCount=0;
            for(char c:s){
                if(c==' ')currCount++;
            }
            count=max(count,currCount);
        }
        return count+1;
    }
};