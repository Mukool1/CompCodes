class Solution {
public:
    void merge(vector<int>&left,vector<int>&right,vector<int>&nums){
        int left_size=nums.size()/2;
        int right_size=nums.size()-left_size;
        int i=0,l=0,r=0;
        while(l<left_size&&r<right_size){
            if(left[l]<right[r]){
                nums[i]=left[l];
                l++;
                i++;
            }
            else{
                nums[i]=right[r];
                r++;
                i++;

            }
        }
        while(l<left_size){
            nums[i]=left[l];
            l++;
            i++;
        }
        while(r<right_size){
            nums[i]=right[r];
            r++;
            i++;
        }
    }
    void mergeSort(vector<int>&nums){
        int n = nums.size();
        if(n<=1)return;
        int mid=n/2;
        int j=0;
        vector<int>left(mid);
        vector<int>right(n-mid);
        for(int i=0;i<n;i++){
            if(i<mid){
                left[i]=nums[i];
            }
            else{
                right[j]=nums[i];
                j++;
            }
        }
        mergeSort(left);
        mergeSort(right);
        merge(left,right,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums);
        return nums;
    }
};