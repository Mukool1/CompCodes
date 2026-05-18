class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int fac[10]={1,1,2,6,24,120,720,5040, 40320, 362880};
        int temp=n;
        long long sum=0;
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