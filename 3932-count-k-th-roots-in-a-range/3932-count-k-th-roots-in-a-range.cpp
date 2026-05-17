class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        if(k==1||k==0)return r-l+1;
        int count=0;
        for(int i=0;pow(i,k)<=r;i++){
            if(pow(i,k)<=r&&pow(i,k)>=l)count++;
        }
        return count;
    }
};