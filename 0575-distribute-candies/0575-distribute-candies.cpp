class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count=0;
        int n=candyType.size();
        unordered_map<int,int>freq;
        for(int i:candyType){
            freq[i]++;
        }
        int types=freq.size();
        return min(types,n/2);
    }
};