class Solution {
public:
    vector<int> game(vector<int>& n){
        vector<int> ans;
        int index = 0;

        for(int i = 0; i < n.size(); i += 2){
            if(index % 2 == 0){
                int x = min(n[i], n[i+1]);
                ans.push_back(x);
            }
            else{
                int x = max(n[i], n[i+1]);
                ans.push_back(x);
            }
            index++;
        }

        return ans;
    }
    int minMaxGame(vector<int>& nums) {
        while(nums.size() > 1){
            nums = game(nums);
        }

        return nums[0];
    }
};