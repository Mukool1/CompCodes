class Solution {
public:
    int sumOfPrimesInRange(int n) {
        if(n<2)return 0;
        int rev=0;
        int temp=n;
        while(temp){
            rev=rev*10+temp%10;
            temp/=10;
        }
        int low=min(rev,n);
        int high=max(rev,n);
        vector<bool> isPrime(high+1, true);
        isPrime[0]=isPrime[1]=false;

        for(int p=2;p*p<=high;p++){
            if(isPrime[p]){
                for(int i=p*p;i<=high;i+=p){
                    isPrime[i]=false;
                }
            }
        }

        int sum=0;
        for(int i=low;i<=high;i++){
            if(isPrime[i])sum+=i;
        }
        return sum;
    }
};