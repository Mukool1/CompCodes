class Solution {
public:
    int digitRange(int n){
        if(n==0)return 0;
        int least=9,largest=0;
        while(n){
            least=min(n%10,least);
            largest=max(n%10,largest);
            n/=10;
        }
        return largest-least;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxRange=-1;
        int res=0;
        for(int n:nums){
            maxRange=max(digitRange(n),maxRange);
        }
        for(int n:nums){
            if(maxRange==digitRange(n))res+=n;
        }
        return res;
    }
};