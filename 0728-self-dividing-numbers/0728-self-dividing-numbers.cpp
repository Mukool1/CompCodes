class Solution {
public:

    bool divideSelf(int n){
        int temp=n;
        while(temp){
            int digit=temp%10;
            if(digit==0)return false;
            if(n%digit!=0)return false;
            temp/=10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(divideSelf(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};