class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int fac[10];
        fac[0]=1;
        for(int i=1;i<10;i++){
            fac[i]=fac[i-1]*i;
        }
        int temp=n,sum=0;
        unordered_map<int,int>mp;
        while(temp){
            int digit=temp%10;
            mp[digit]++;
            sum+=fac[digit];
            temp/=10;
        }
        while(sum){
            int digit=sum%10;
            if(!mp.count(digit))return false;
            mp[digit]--;
            if(mp[digit] == 0) mp.erase(digit);
            sum/=10;
        }
        return mp.empty();
    }
};