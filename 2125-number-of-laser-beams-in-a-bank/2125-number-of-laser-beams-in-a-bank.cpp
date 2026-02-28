class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int currCount=0;
        int prevCount=0;
        int dev=0;
        for(string s:bank){
            for(int i=0;i<s.size();i++){
                if(s[i]=='1'){
                    dev++;
                }
            }
            if(dev){
                currCount+=prevCount*dev;
                prevCount=dev;
            }
            dev=0;
        }
        return currCount;
    }
};