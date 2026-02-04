class Solution {
public:
    bool ifSame(int frequency[],int windowfrequency[]){
        for(int i=0;i<26;i++){
            if(frequency[i]!=windowfrequency[i])return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int frequency[26]={0};
        for(int i=0;i<s1.size();i++){
            frequency[s1[i]-'a']++;
        }
        int windowSize=s1.size();
        
        for(int i=0;i<s2.size();i++){
            int windowfrequency[26]={0};
            int windowIndex=0,index=i;
            while(windowIndex<windowSize && index<s2.size()){
                windowfrequency[s2[index]-'a']++;
                windowIndex++,index++;
            }
            if(ifSame(frequency,windowfrequency))return true;
        }
        return false;
    }
};