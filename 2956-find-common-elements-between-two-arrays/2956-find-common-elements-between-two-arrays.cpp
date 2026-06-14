class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>help1;
        unordered_set<int>help2;
        vector<int>res(2,0);
        for(int i:nums1){
            help1.insert(i);
        }
        for(int i:nums2){
            help2.insert(i);
        }
        for(int i:nums1){
            res[0]+=help2.count(i);
        }
        for(int i:nums2){
            res[1]+=help1.count(i);
        }
        return res;
    }
};