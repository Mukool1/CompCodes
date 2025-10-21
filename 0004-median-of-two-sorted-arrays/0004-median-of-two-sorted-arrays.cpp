class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++){
            nums2.push_back(nums1[i]);
        } 
        sort(nums2.begin(),nums2.end());
        double median=0;
        if(nums2.size()%2!=0){
            return nums2.at(nums2.size()/2);
        }
        return (nums2.at(nums2.size()/2-1)+nums2.at((nums2.size()/2)))/2.0;
    }
};