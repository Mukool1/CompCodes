class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> res(n, -1);
        for (int i = 0; i < n; i++) {
            int ind = -1;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    ind = j;
                    break;
                }
            }
            if (ind != -1) {
                for (int j = ind + 1; j < nums2.size(); j++) {
                    if (nums1[i]<nums2[j]){
                        res[i]=nums2[j];
                        break;
                    }
                }
            }
        }
        return res;
    }
};