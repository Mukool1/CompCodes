class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=n-1,i=m-1;
        int ind=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]<=nums2[j]){
                nums1[ind--]=nums2[j];
                j--;
            }
            else{
                nums1[ind--]=nums1[i];
                i--;
            }
        }
        while(j>=0){
            nums1[ind--]=nums2[j];
            j--;
        }
    }
};