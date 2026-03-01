class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int>help(nums.begin(),nums.end());
        int longest=0;
        for(int num:help){
            if(help.find(num-1)==help.end()){
                int curr=num;
                int thisLong=1;
                while(help.find(curr+1)!=help.end()){
                    curr++;
                    thisLong++;
                }
            longest=max(longest,thisLong);
            }
        }
        return longest;
    }
};