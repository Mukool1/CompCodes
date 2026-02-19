class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0)return 1;
        int mask=0;
        int temp=num;
        while(temp){
            mask=(mask<<1)|1;
            temp>>=1;
        }
        return num^mask;
    }
};