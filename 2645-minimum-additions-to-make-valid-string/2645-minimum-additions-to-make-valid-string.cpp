class Solution {
public:
    int addMinimum(string word) {
        int seq=1;
        for(int i=1;i<word.size();i++){

            if(word[i]<=word[i-1]){
                seq++;
            }
        }
        return (3*seq)-word.size();
    }
};