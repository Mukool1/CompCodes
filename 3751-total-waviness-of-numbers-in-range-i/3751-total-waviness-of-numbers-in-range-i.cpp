class Solution {
public:
    int wave(int i){
        string str=to_string(i);
        int count=0;
        for(int i=1;i<str.size()-1;i++){
            if(str[i-1]<str[i] && str[i]>str[i+1])count++;
            if(str[i-1]>str[i] && str[i]<str[i+1])count++;
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            if(i<100)continue;
            ans+=wave(i);
        }
        return ans;
    }
};