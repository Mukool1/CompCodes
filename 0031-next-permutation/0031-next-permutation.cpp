class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        // auto start = begin(nums)+pivot+1;
        // auto end = begin(nums)+nums.size();
        // reverse(start,end);  // We can also use iterator and reverse function
        //which also uses same time O(N) as we do using 2 pointers
        
        int i=pivot+1;
        int j=nums.size()-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};